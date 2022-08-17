import linecache
from tkinter import *
from tkinter import messagebox
import re


def setStartingPlayerResources(rootWindow, aiDifficulty):
    resourceStartingWindow = Toplevel(rootWindow)

    resourceStartingWindow.title("Player Resources at the Start of the Campaign")
    resourceStartingWindow.geometry('300x250')

    researchPoints = StringVar()
    manPowerPoints = StringVar()
    starCallPoints = StringVar()
    ammoPoints = StringVar()

    researchPointsSpin = Spinbox(resourceStartingWindow, from_=1.0, to=10000.0, textvariable=researchPoints)
    researchPointsSpin.grid(row=1, column=1)
    manPowerPointSpin = Spinbox(resourceStartingWindow, from_=1.0, to=100000.0, textvariable=manPowerPoints)
    manPowerPointSpin.grid(row=2, column=1)
    starCallPointsSpin = Spinbox(resourceStartingWindow, from_=1.0, to=10000.0, textvariable=starCallPoints)
    starCallPointsSpin.grid(row=3, column=1)
    ammoPointsSpin = Spinbox(resourceStartingWindow, from_=1.0, to=10000.0, textvariable=ammoPoints)
    ammoPointsSpin.grid(row=4, column=1)

    # Get the file to read based on which difficulty is selected
    fileToRead = "./resource/set/dynamic_campaign/dcg_normal.inc"

    if aiDifficulty.get() == "performance":
        fileToRead = "./resource/set/dynamic_campaign/dcg_easy.inc"
    elif aiDifficulty.get() == "hard":
        fileToRead = "./resource/set/dynamic_campaign/dcg_hard.inc"
    elif aiDifficulty.get() == "unfair":
        fileToRead = "./resource/set/dynamic_campaign/dcg_heroic.inc"

    # Function used to grab the starting values given the file line    
    def getStartingValues(fileLine):
        currentLength = linecache.getline(r"" + fileToRead, int(fileLine))
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

    manPowerPoints.set(getStartingValues(55))
    currentManPowerPoints = str(int(manPowerPoints.get()))

    starCallPoints.set(getStartingValues(67))
    currentStarCallPoints = str(int(starCallPoints.get()))

    ammoPoints.set(getStartingValues(75))
    currentAmmoPoints = str(int(ammoPoints.get()))

    researchPoints.set(getStartingValues(84))
    currentResearchPoints = str(int(researchPoints.get()))

    def savechanges():
        try:
            lengthFile = open(fileToRead, "w")
            manPowerPoints.get().isdigit()
            newManPowerPoints = str(int(manPowerPoints.get()))
            starCallPoints.get().isdigit()
            newStarCallPoints = str(int(starCallPoints.get()))
            ammoPoints.get().isdigit()
            newAmmoPoints = str(int(ammoPoints.get()))
            researchPoints.get().isdigit()
            newResearchPoints = str(int(researchPoints.get()))

            newFile = (wholeFile.replace(currentManPowerPoints, newManPowerPoints))
            newFile = (newFile.replace(currentStarCallPoints, newStarCallPoints))
            newFile = (newFile.replace(currentAmmoPoints, newAmmoPoints))
            newFile = (newFile.replace(currentResearchPoints, newResearchPoints))

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

    saveButton = Button(resourceStartingWindow, text="Save changes", command=savechanges)
    saveButton.grid(row=6, column=1, padx=3)


    researchPointslabel=Label(resourceStartingWindow, text="Starting research points").grid(row=1, column=2)
    manPowerPointlabel = Label(resourceStartingWindow, text="Starting manpower points").grid(row=2,column=2)
    starCallPointslabel = Label(resourceStartingWindow,text="Starting star points").grid(row=3, column=2)
    starCallPointslabel = Label(resourceStartingWindow, text="Starting ammo points").grid(row=4, column=2)