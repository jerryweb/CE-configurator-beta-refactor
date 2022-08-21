import linecache
from tkinter import *
from tkinter import messagebox
import re
from help_functions import *

def setPlayerArmySizeModule(rootWindow, fileToRead):
    playerSizeWindow = Toplevel(rootWindow)

    playerSizeWindow.title("Player Army Size")
    playerSizeWindow.geometry('700x250')
    stageSizesVariable = [StringVar()]

    for i in range(6):
        stageSizesVariable.append(StringVar())  

    newPlayerAmmoPoints = StringVar()

    lengthFile = open(fileToRead, "r")
    wholeFile = lengthFile.read()
    currentStagesLine = linecache.getline(r"" + fileToRead, 3)
    currentStagesLine = currentStagesLine.strip()
    currentStagesLine = currentStagesLine.strip("{StageCP}")
    currentStagesLine = currentStagesLine.strip()
    currentStagesArray = currentStagesLine.split(" ")

    print(currentStagesArray)

    for i in range(len(currentStagesArray)):
        stageSizesVariable[i].set(currentStagesArray[i])

    currentAmmoPointsLine = linecache.getline(r"" + fileToRead, 94)
    ammoPointsLineFormat = r"[\d]+\d"
    print(currentAmmoPointsLine)
    currentAmmoPointsLine = str(re.search(ammoPointsLineFormat, currentAmmoPointsLine).group())
    newPlayerAmmoPoints.set(currentAmmoPointsLine)
    print(currentAmmoPointsLine)

    lengthFile.flush()
    lengthFile.close()
    linecache.clearcache()

    def saveChanges():
        try:
            newStages = []
            for idx in range(len(stageSizesVariable)):
                stageEntries[idx].get().isdigit()
                print(stageEntries[idx].get().isdigit())
                newStages.append(str(int(stageSizesVariable[idx].get())))

            print("saving")
            newLengthFile = open(fileToRead, "w")

            newPlayerStages = " ".join(newStages)
            newFile = (wholeFile.replace(currentStagesLine, newPlayerStages))
            newFile = (newFile.replace(currentAmmoPointsLine,   str(int(newPlayerAmmoPoints.get()))))

            newLengthFile.write(newFile)
            messagebox.showinfo("Saved", "Values Saved")
            newLengthFile.flush()
            newLengthFile.close()
            playerSizeWindow.destroy()

        except ValueError:
            print("Error, please enter an integer (number)")
            messagebox.showerror("Error", "Error, please enter an integer (number)")
            for idx in range(len(stageSizesVariable)):
                if not stageEntries[idx].get().isdigit():
                    stageEntries[idx].delete(0, END)
                    stageEntries[idx].insert(0, currentStagesArray[idx])

            currentBudget.delete(0, END)
            currentBudget.insert(0, currentAmmoPointsLine)
            playerSizeWindow.focus_force()



    # Create the 7 player callin stage entires
    stageEntries = [Entry(playerSizeWindow, textvariable=stageSizesVariable[0], width=5)]
    stageEntries[0].delete(0, END)
    stageEntries[0].insert(0, currentStagesArray[0])
    stageEntries[0].grid(row=2, column=2)

    stageLabels = [Label(playerSizeWindow, text=f"Stage 1")]
    stageLabels[0].grid(row=2, column=1)

    stagesRow = 3
    stagesCol = 2

    for i in range(1, len(stageSizesVariable)):
        stageEntries.append(Entry(playerSizeWindow, textvariable=stageSizesVariable[i], width=5))
        stageEntries[i].delete(0, END)
        stageEntries[i].insert(0, currentStagesArray[i])
        stageEntries[i].grid(row=stagesRow, column=stagesCol)

        stageLabels.append(Label(playerSizeWindow, text=f"Stage " + str(i + 1)))
        stageLabels[i].grid(row=stagesRow, column=1)

        stagesRow = stagesRow + 1

    # Create the ammo point entry
    currentBudget = Entry(playerSizeWindow, textvariable=newPlayerAmmoPoints, width=50)
    currentBudget.delete(0, END)
    currentBudget.insert(0, currentAmmoPointsLine)
    currentBudget.grid(row=stagesRow + 1, column=1)

    playerCPGrowthLabel = Label(playerSizeWindow, text=f"Ammo points given during battle to buy these stages(in mod you're supposed to only have enough for 5)").grid(row=stagesRow, column=1)

    # Add the save button
    saveButton = Button(playerSizeWindow, text="Save changes", command=saveChanges)
    saveButton.grid(row=stagesRow + 2, column=1, padx=3)

    Label(playerSizeWindow,
          text=f"Size of each callin stage. Keep the space between each number and it should be 7 numbers").grid(
        row=1, column=1)
