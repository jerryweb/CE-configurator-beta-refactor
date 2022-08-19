import linecache
from tkinter import *
from tkinter import messagebox
import re

from help_functions import *


def setStartingPlayerResources(rootWindow, fileToRead):
    resourceStartingWindow = Toplevel(rootWindow)

    resourceStartingWindow.title("Player Resources at the Start of the Campaign")
    resourceStartingWindow.geometry('300x250')

    researchPoints = StringVar()
    manPowerPoints = StringVar()
    starCallPoints = StringVar()
    ammoPoints = StringVar()
    oldManPowerPoints = ""
    oldStarCallPoints = ""
    oldResearchPoints = ""
    oldAmmoPoints = ""

    researchPointsSpin = Spinbox(resourceStartingWindow, from_=1.0, to=10000.0, textvariable=researchPoints)
    researchPointsSpin.grid(row=1, column=1)
    manPowerPointSpin = Spinbox(resourceStartingWindow, from_=1.0, to=100000.0, textvariable=manPowerPoints)
    manPowerPointSpin.grid(row=2, column=1)
    starCallPointsSpin = Spinbox(resourceStartingWindow, from_=1.0, to=10000.0, textvariable=starCallPoints)
    starCallPointsSpin.grid(row=3, column=1)
    ammoPointsSpin = Spinbox(resourceStartingWindow, from_=1.0, to=10000.0, textvariable=ammoPoints)
    ammoPointsSpin.grid(row=4, column=1)

    # Function used to grab the starting values given the file line
    def getStartingLine(fileLine):
        startingValueLine = linecache.getline(r"" + fileToRead, int(fileLine))
        return startingValueLine

    def getCurrentStartingValue(currentLength):
        currentLengthFormat = r"StartVal +\d+"
        currentLength = str(re.search(currentLengthFormat, currentLength).group())
        currentLength = currentLength.strip()
        currentLength = currentLength.strip("{StartVal}")
        currentLength = currentLength.strip()

        print(currentLength)
        linecache.clearcache()
        return currentLength

    lengthFile = open(fileToRead, "r")
    wholeFile = lengthFile.read()
    oldManPowerPoints = getStartingLine(55)
    manPowerPoints.set(getCurrentStartingValue(oldManPowerPoints))
    currentManPowerPoints = str(int(manPowerPoints.get()))

    oldStarCallPoints = getStartingLine(67)
    starCallPoints.set(getCurrentStartingValue(oldStarCallPoints))
    currentStarCallPoints = str(int(starCallPoints.get()))

    oldAmmoPoints = getStartingLine(75)
    ammoPoints.set(getCurrentStartingValue(oldAmmoPoints))
    currentAmmoPoints = str(int(ammoPoints.get()))

    oldResearchPoints = getStartingLine(84)
    researchPoints.set(getCurrentStartingValue(oldResearchPoints))
    currentResearchPoints = str(int(researchPoints.get()))

    def savechanges():
        try:
            lengthFile = open(fileToRead, "w")
            manPowerPoints.get().isdigit()
            newManPowerPoints = str(int(manPowerPoints.get()))
            newManPowerPoints = f"				{{StartVal " + newManPowerPoints + "}\n"
            starCallPoints.get().isdigit()
            newStarCallPoints = str(int(starCallPoints.get()))
            newStarCallPoints = f"				{{StartVal " + newStarCallPoints + "}\n"
            ammoPoints.get().isdigit()
            newAmmoPoints = str(int(ammoPoints.get()))
            newAmmoPoints = f"				{{StartVal " + newAmmoPoints + "}\n"
            researchPoints.get().isdigit()
            newResearchPoints = str(int(researchPoints.get()))
            newResearchPoints = f"				{{StartVal " + newResearchPoints + "}\n"

            newFile = (wholeFile.replace(oldManPowerPoints, newManPowerPoints))
            newFile = (newFile.replace(oldStarCallPoints, newStarCallPoints))
            newFile = (newFile.replace(oldAmmoPoints, newAmmoPoints))
            newFile = (newFile.replace(oldResearchPoints, newResearchPoints))

            lengthFile.write(newFile)
            messagebox.showinfo("Saved", "Values Saved")
            resourceStartingWindow.destroy()

        except ValueError:
            messagebox.showerror("Error", "Error, please enter an integer (number)")
            manPowerPointSpin.delete(0, END)
            manPowerPointSpin.insert(0, currentManPowerPoints)
            starCallPointsSpin.delete(0, END)
            starCallPointsSpin.insert(0, currentStarCallPoints)
            ammoPointsSpin.delete(0, END)
            ammoPointsSpin.insert(0, currentAmmoPoints)
            researchPointsSpin.delete(0, END)
            researchPointsSpin.insert(0, currentResearchPoints)
            resourceStartingWindow.focus_force()

    saveButton = Button(resourceStartingWindow, text="Save changes", command=savechanges)
    saveButton.grid(row=6, column=1, padx=3)


    researchPointslabel=Label(resourceStartingWindow, text="Starting research points").grid(row=1, column=2)
    manPowerPointlabel = Label(resourceStartingWindow, text="Starting manpower points").grid(row=2,column=2)
    starCallPointslabel = Label(resourceStartingWindow,text="Starting star points").grid(row=3, column=2)
    starCallPointslabel = Label(resourceStartingWindow, text="Starting ammo points").grid(row=4, column=2)