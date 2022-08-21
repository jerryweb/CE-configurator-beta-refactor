import linecache
from tkinter import *
from tkinter import messagebox



def gameLength(rootWindow):
    lengthWindow = Toplevel(rootWindow)

    lengthWindow.title("Victory Points Required to Win")
    lengthWindow.geometry('700x150')
    lengthWindow.focus_force()

    wholeFile = open("./resource/set/multiplayer/games/campaign_capture_the_flag.set", "r").read()
    oldVictoryPointsLine = linecache.getline(r"./resource/set/multiplayer/games/campaign_capture_the_flag.set", 44)
    currentVictoryPoints = oldVictoryPointsLine
    currentVictoryPoints = currentVictoryPoints.strip()
    currentVictoryPoints = currentVictoryPoints.strip("{scoreFinal}")
    currentVictoryPoints = currentVictoryPoints.strip()
    oldVictoryPoints = currentVictoryPoints
    linecache.clearcache()

    def savechanges():
        try:
            newFile = open("./resource/set/multiplayer/games/campaign_capture_the_flag.set", "w")
            newFile.write(wholeFile.replace(oldVictoryPointsLine, f"		{{scoreFinal				" + str(int(currentPoints.get())) + "}\n"))
            newFile.close()
            messagebox.showinfo("Saved", "Values Saved")
            lengthWindow.destroy()

        except ValueError:
            messagebox.showerror("Error", "Error, please enter a decimal number")
            currentPoints.delete(0, END)
            currentPoints.insert(0, oldVictoryPoints)
            lengthWindow.focus_force()

    tipLength = Label(lengthWindow, text=" 24000 mean around 30-35 minutes of defense so \ncount accordingly")
    tipLength.pack()

    currentPoints = Entry(lengthWindow,textvariable=currentVictoryPoints,width=15)
    currentPoints.delete(0, END)
    currentPoints.insert(0, currentVictoryPoints)
    currentPoints.pack()


    saveButton = Button(lengthWindow, text="Save Shanges", command=savechanges)
    saveButton.pack()

