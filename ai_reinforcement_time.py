import linecache
from tkinter import *
from tkinter import messagebox
import re
from help_functions import *


def preparationTime(rootWindow):
    preparationWindow = Toplevel(rootWindow)
    preparationWindow.title("Time before AI arrives")
    preparationWindow.geometry('800x250')
    preparationWindow.focus_force()

    fileToRead = "./resource/conquest_configuration/bot.conquest_configuration.lua"

    # defense flag lines in the conquest_config file
    fileLines = [16, 23, 19, 20, 24]

    preparationTimeVars: StringVar = []
    oldPreparationTimes = []
    currentPrepTimeFileLines = []
    flagOffsetText = [f"    oneFlagOffsetTime = ", f"    twoFlagOffsetTime = ", f"    threeFlagOffsetTime = ", f"    fourFlagOffsetTime = ", f"    fiveFlagOffsetTime = "]
    wholeFile = open(fileToRead, "r").read()

    # get the ai start times
    for idx in range(5):
        preparationTimeVars.append(StringVar())
        prepTime = getStartingLine(fileLine=fileLines[idx], fileToRead=fileToRead)
        currentPrepTimeFileLines.append(prepTime)
        prepTime = prepTime.strip()
        prepTime = prepTime.strip("oneFlagOffsetTime =")
        prepTime = prepTime.strip("twoFlagOffsetTime =")
        prepTime = prepTime.strip("threeFlagOffsetTime =")
        prepTime = prepTime.strip("fourFlagOffsetTime =")
        prepTime = prepTime.strip("fiveFlagOffsetTime =")
        prepTime = prepTime.strip()
        oldPreparationTimes.append(prepTime)
        preparationTimeVars[idx].set(prepTime)

    def savechanges():
        try:

            lengthFile = open(fileToRead, "w")

            # check that user input is valid (must be a number)
            for j in range(len(preparationTimeVars)):
                prepTimeSpinBoxes[j].get().isdigit()

            newFile = wholeFile
            for index in range(len(preparationTimeVars)):
                newFile = newFile.replace(currentPrepTimeFileLines[index],
                                              str(flagOffsetText[index] + str(
                                                  int(preparationTimeVars[index].get())) + "\n"))

            lengthFile.write(newFile)
            messagebox.showinfo("Saved", "Values Saved")
            lengthFile.flush()
            lengthFile.close()
            preparationWindow.destroy()

        except ValueError:
            print("Error, please enter an integer (number)")
            messagebox.showerror("Error", "Error, please enter an integer (number)")

            for k in range(len(preparationTimeVars)):
                if not prepTimeSpinBoxes[k].get().isdigit():
                    prepTimeSpinBoxes[k].delete(0, END)
                    prepTimeSpinBoxes[k].insert(0, oldPreparationTimes[k])

            preparationWindow.focus_force()

    prepTimeSpinBoxes = []
    spinBoxRow = 2

    for i in range(len(preparationTimeVars)):
        prepTimeSpinBoxes.append(Spinbox(preparationWindow, from_=1.0, to=10000.0, textvariable=preparationTimeVars[i]))
        prepTimeSpinBoxes[i].grid(row=spinBoxRow, column=1)
        spinBoxRow = spinBoxRow + 2

    preparationTimeslabel = Label(preparationWindow,
                                  text="Time in seconds before AI comes in 1 flag missions (early defenses)").grid(
        row=1, column=1)
    preparationTimeslabel = Label(preparationWindow,
                                  text="Time in seconds before AI comes in 2 flag missions (mid defenses)").grid(row=3,
                                                                                                                 column=1)
    preparationTimeslabel = Label(preparationWindow,
                                  text="Time in seconds before AI comes in 3 flag missions (mid attacks)").grid(row=5,
                                                                                                                column=1)
    preparationTimeslabel = Label(preparationWindow,
                                  text="Time in seconds before AI comes in 4 flag missions (late attacks)").grid(row=7,
                                                                                                                 column=1)
    preparationTimeslabel = Label(preparationWindow,
                                  text="Time in seconds before AI comes in 5 flag missions (late defenses)").grid(row=9,
                                                                                                                  column=1)

    saveButton = Button(preparationWindow, text="Save Changes", command=savechanges)
    saveButton.grid(row=6, column=3, padx=3)
