from tkinter import *
from tkinter import messagebox
import linecache
import re
from help_functions import *


def aiDefenseResearchSpeed(rootWindow, fileToRead):
    fortificationWindow = Toplevel(rootWindow)
    fortificationWindow.title("AI defense research speed")
    fortificationWindow.geometry('550x100')
    fortificationWindow.focus_force()

    secondLevel = StringVar()
    thirdLevel = StringVar()
    currentSecondLevel = StringVar()
    currentThirdLevel = StringVar()

    secondLevelspin = Spinbox(fortificationWindow, from_=1.0, to=100.0, textvariable=secondLevel).grid(row=2, column=1)
    thirdLevelspin = Spinbox(fortificationWindow, from_=1.0, to=100.0, textvariable=thirdLevel).grid(row=3, column=1)

    def getDefenseLevel(currentLength):
        currentLengthFormat = r"unlock games +\d+"
        currentLength = str(re.search(currentLengthFormat, currentLength).group())
        currentLength = currentLength.strip("[']")
        currentLength = currentLength.replace("unlock games ", "").strip()
        linecache.clearcache()
        return currentLength

    wholeFile = open(fileToRead, "r").read()

    oldSecondLevel = getStartingLine(fileLine=23, fileToRead=fileToRead)
    secondLevel.set(getDefenseLevel(currentLength=oldSecondLevel))
    currentSecondLevel.set(secondLevel.get())
    print(secondLevel.get())

    oldThirdLevel = getStartingLine(fileLine=28, fileToRead=fileToRead)
    thirdLevel.set(getDefenseLevel(currentLength=oldThirdLevel))
    currentThirdLevel.set(thirdLevel.get())
    print(thirdLevel.get())

    def savechanges():
        try:
            lengthFile = open(fileToRead, "w")
            secondLevel.get().isdigit()
            thirdLevel.get().isdigit()
            newFile = wholeFile.replace(oldSecondLevel, str(f"				{{unlock games " + str(
                int(secondLevel.get())) + " progress 0.99}\n"))
            newFile = newFile.replace(oldThirdLevel, str(f"				{{unlock games " + str(
                int(thirdLevel.get())) + " progress 0.99}\n"))
            lengthFile.write(newFile)
            lengthFile.close()
            messagebox.showinfo("Saved", "Values Saved")
            fortificationWindow.destroy()

        except ValueError:
            messagebox.showerror("Error", "Error, please enter a integer number")
            fortificationWindow.focus_force()
            secondLevelspin.delete(0, END)
            secondLevelspin.insert(0, currentSecondLevel)
            thirdLevelspin.delete(0, END)
            thirdLevelspin.insert(0, currentThirdLevel)

    secondLevelLabel = Label(fortificationWindow,
                             text="Amount of missions played for second defense level to be researched").grid(row=2,
                                                                                                              column=2)
    thirdLevelLabel = Label(fortificationWindow,
                            text="Amount of missions played for third defense level to be researched").grid(row=3,
                                                                                                            column=2)

    saveButton = Button(fortificationWindow, text="Save changes", command=savechanges)
    saveButton.grid(row=4, column=1, padx=3)

    fortificationWindowlabel = Label(fortificationWindow,
                                     text=f"Change how many battles it takes for AI to reseach 2 and 3 defense level.").grid(
        row=1, column=2)
