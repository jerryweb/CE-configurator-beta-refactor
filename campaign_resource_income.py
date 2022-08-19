import linecache
from tkinter import *
from tkinter import messagebox
import re


def resourceIncome(rootWindow, fileToRead):
    resourceIncWindow = Toplevel(rootWindow)

    resourceIncWindow.title("Resource income multiplier")
    resourceIncWindow.geometry('700x250')

    lowRisk = StringVar()
    standardRisk = StringVar()
    highRisk = StringVar()
    oldLowRisk = ""
    oldStandardRisk = ""
    oldHighRisk = ""

    lowRiskspin = Spinbox(resourceIncWindow, from_=1.00, to=100.00, textvariable=lowRisk)
    lowRiskspin.grid(row=3,column=1)
    standardRiskspin = Spinbox(resourceIncWindow, from_=1.00, to=100.00, textvariable=standardRisk)
    standardRiskspin.grid(row=4,column=1)
    highRiskspin = Spinbox(resourceIncWindow, from_=1.00, to=100.00, textvariable=highRisk)
    highRiskspin.grid(row=5,column=1)
    print(fileToRead)
    lengthFile = open(fileToRead, "r")    
    wholeFile = lengthFile.read()

    # Function used to grab the starting values given the file line
    def getStartingLine(fileLine):
        startingValueLine = linecache.getline(r"" + fileToRead, int(fileLine))
        return startingValueLine

    def getCurrentRewardStartingValue(currentLength):
        currentLengthFormat = r"Rewards +\d+"
        currentLength = str(re.search(currentLengthFormat, currentLength).group())
        currentLength = currentLength.strip()
        currentLength = currentLength.strip("{Rewards}")
        currentLength = currentLength.strip()

        print(currentLength)
        linecache.clearcache()
        return currentLength

    wholeFile = open(fileToRead, "r").read()

    oldLowRisk = getStartingLine(39)
    lowRisk.set(getCurrentRewardStartingValue(oldLowRisk))
    currentLowRisk = str(float(lowRisk.get()))

    oldStandardRisk = getStartingLine(44)
    standardRisk.set(getCurrentRewardStartingValue(oldStandardRisk))
    currentStandardRisk = str(float(standardRisk.get()))

    oldHighRisk = getStartingLine(49)
    highRisk.set(getCurrentRewardStartingValue(oldHighRisk))
    currentHighRisk = str(float(highRisk.get()))

    def savechanges():
        try:
            lengthFile = open(fileToRead, "w")
            lowRisk.get().isdigit()
            standardRisk.get().isdigit()
            highRisk.get().isdigit()

            newFile = (wholeFile.replace(oldLowRisk, f"            {{Rewards " + str(float(lowRisk.get())) + "}\n"))
            newFile = (newFile.replace(oldStandardRisk, f"            {{Rewards " + str(float(standardRisk.get())) + "}\n"))
            newFile = (newFile.replace(oldHighRisk, f"            {{Rewards " + str(float(highRisk.get())) + "}\n"))

            lengthFile.write(newFile)
            messagebox.showinfo("Saved", "Values Saved")
            resourceIncWindow.destroy()

        except ValueError:
            messagebox.showerror("Error", "Error, please enter a decimal number")
            lowRiskspin.delete(0, END)
            lowRiskspin.insert(0, currentLowRisk)
            standardRiskspin.delete(0, END)
            standardRiskspin.insert(0, currentStandardRisk)
            highRiskspin.delete(0, END)
            highRiskspin.insert(0, currentHighRisk)
            resourceIncWindow.focus_force()


    saveButton = Button(resourceIncWindow, text="Save changes", command=savechanges)
    saveButton.grid(row=6, column=1, padx=3)

    infoLabel = Label (resourceIncWindow, text="This is a multiplier depending on the risk level (Stars) of the mission.\n First is 1 star,second is 2 star and third is 3 star.")
    infoLabel.grid(row=1, column=1, padx=3)
