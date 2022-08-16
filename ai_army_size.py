from tkinter import *
from tkinter import messagebox
import linecache
import re


def setAiArmySizeModule(rootWindow, aiDifficulty):
    aiSizeWindow = Toplevel(rootWindow)

    aiSizeWindow.title("AI Army Size")
    aiSizeWindow.geometry('700x150')
    aiSizeCurrent = ""
    fileToRead = "./resource/set/dynamic_campaign/dcg_normal.inc"

    if aiDifficulty.get() == "performance":
        fileToRead = "./resource/set/dynamic_campaign/dcg_easy.inc"
    elif aiDifficulty.get() == "hard":
        fileToRead = "./resource/set/dynamic_campaign/dcg_hard.inc"
    elif aiDifficulty.get() == "unfair":
        fileToRead = "./resource/set/dynamic_campaign/dcg_heroic.inc"

    with open(fileToRead, "r") as lengthFile:
        wholeFile = lengthFile.read()
        currentLength2 = r"BotResources +\d+"
        currentLength3 = str(re.search(currentLength2, wholeFile).group())
        currentLength4 = currentLength3.strip("[']")
        currentLength5 = currentLength4.replace("BotResources", "").strip()

    def savechanges():
        with open(fileToRead, "w") as lengthFile:
            newPoints = int(str(currentPoints.get()))
            lengthFile.write(wholeFile.replace(currentLength4, str(f"BotResources {newPoints}")))
            messagebox.showinfo("Saved")

            aiSizeWindow.destroy()

    currentPoints = Entry(aiSizeWindow, textvariable=aiSizeCurrent, width=15)
    currentPoints.delete(0, END)
    currentPoints.insert(0, currentLength5)
    currentPoints.grid(row=2, column=2)

    saveButton = Button(aiSizeWindow, text="Save changes", command=savechanges)
    saveButton.grid(row=3, column=2, padx=3)

    aiSizeWindow = Label(aiSizeWindow,
                         text=f"Current AI army size multiplier is {currentLength5}. Normally it's between 6 and 7").grid(
        row=1, column=2)
