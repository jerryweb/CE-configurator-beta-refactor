from tkinter import *
from tkinter import messagebox
import re
from help_functions import *

def setAiArmySizeModule(rootWindow, fileToRead):
    aiSizeWindow = Toplevel(rootWindow)

    aiSizeWindow.title("AI Army Size")
    aiSizeWindow.geometry('700x150')
    aiSizeCurrent = ""
    print(fileToRead)
    # with open(fileToRead, "r") as lengthFile:
    #     wholeFile = lengthFile.read()

        # currentLength2 = r"BotResources +\d+"
        # currentLength3 = str(re.search(currentLength2, wholeFile).group())
        # currentLength4 = currentLength3.strip("[']")
        # currentLength5 = currentLength4.replace("BotResources", "").strip()


    lengthFile = open(fileToRead, "r")
    wholeFile = lengthFile.read()
    # currentAISizeLine = r"BotResources +\d+"
    # currentAISizeLine = str(re.search(currentAISizeLine, wholeFile).group())
    currentAISizeLine = linecache.getline(r"" + fileToRead, 37)
    oldAiSizeLine = currentAISizeLine
    currentAISizeLine = currentAISizeLine.strip()
    currentAISizeLine = currentAISizeLine.strip("{BotResources}")
    currentAISizeLine = currentAISizeLine.strip()
    linecache.clearcache()
    print(currentAISizeLine)

    def saveChanges():
        # with open(fileToRead, "w") as lengthFile:
        # Check that user input is an integer (number)
        try:
            fileToWrite = open(fileToRead, "w")
            currentPoints.get().isdigit()
            print(currentPoints.get())
            # newPoints = float(currentPoints.get())
            # lengthFile.write(wholeFile.replace(currentLength4, str(f"BotResources {newPoints}")))
            fileToWrite.write(wholeFile.replace(oldAiSizeLine, "			{BotResources " + str(float(currentPoints.get())) + "}\n"))
            messagebox.showinfo("Saved", "Values Saved")
            aiSizeWindow.destroy()
        # If not reset it back to the default value
        except ValueError:
            messagebox.showerror("Error", "Error, please enter a decimal number")
            currentPoints.delete(0, END)
            # currentPoints.insert(0, currentLength5)
            currentPoints.insert(0, currentAISizeLine)
            aiSizeWindow.focus_force()

    currentPoints = Entry(aiSizeWindow, textvariable=aiSizeCurrent, width=15)
    currentPoints.delete(0, END)
    # currentPoints.insert(0, currentLength5)
    currentPoints.insert(0, currentAISizeLine)
    currentPoints.grid(row=2, column=2)

    saveButton = Button(aiSizeWindow, text="Save changes", command=saveChanges)
    saveButton.grid(row=3, column=2, padx=3)

    # aiSizeLabel = Label(aiSizeWindow,
    #                      text=f"Current AI army size multiplier is {currentLength5}. Normally it's between 6 and 7").grid(
    #     row=1, column=2)
    aiSizeLabel = Label(aiSizeWindow,
                         text=f"Current AI army size multiplier is {currentAISizeLine}. Normally it's between 6 and 7").grid(
        row=1, column=2)
