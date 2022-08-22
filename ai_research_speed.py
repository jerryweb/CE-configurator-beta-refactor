from tkinter import *
from tkinter import messagebox
import linecache
def aiResearches(rootWindow,fileToRead):
    aiResearchWindow = Toplevel(rootWindow)
    aiResearchWindow.title("Change AI Research Speed")
    aiResearchWindow.geometry('400x350')
    aiResearchWindow.focus_force()

    aiProg= StringVar(value="normal")

    normalProgressvar = '				{ResearchStages "0:1 1:2 2:3 3:4 4:5 5:6 6:7 7:8 8:9 9:10 10:11 11:12 12:13 13:14 14:15 15:16 16:17 17:18 18:19 19:20"}\n'
    slow30Progressvar = '				{ResearchStages "0:1 1:1 2:2 3:2 4:3 5:4 6:5 7:6 8:7 9:8 10:9 11:10 12:11 13:12 14:13 15:14 16:15 17:16 18:17 19:18 20:19 21:20"}\n'
    slow60Progressvar = '				{ResearchStages "0:1 1:1 2:2 3:2 4:2 5:3 6:3 7:4 8:4 9:5 10:5 11:6 12:7 13:8 14:9 15:9 16:10 17:11 18:12 19:13 20:14 21:15 22:16 23:17 24:18 25:19 25:20"}\n'
    fastProgressvar = '				{ResearchStages "0:2 1:2 2:4 3:4 4:6 5:6 6:8 7:8 8:10 9:10 10:12 11:13 12:14 13:15 14:16 15:18 16:19 17:20"}\n'


    def setAIResearchStages(researchSpeed):
        print(researchSpeed)
        curretLine = linecache.getline(r"" + fileToRead, 104)
        wholeFile = open(fileToRead, "r").read()
        lengthFile = open(fileToRead, "w")


        wholeFile = wholeFile.replace(curretLine, researchSpeed)
        curretLine = linecache.getline(r"" + fileToRead, 112)
        # print(curretLine)
        wholeFile = wholeFile.replace(curretLine, researchSpeed)
        print(wholeFile)

        linecache.clearcache()
        lengthFile.write(wholeFile)
        lengthFile.close()

    def savechanges():
        print(aiProg.get())

        if aiProg.get() == "slow30":
            setAIResearchStages(researchSpeed=slow30Progressvar)
        elif aiProg.get() == "slow60":
            setAIResearchStages(researchSpeed=slow60Progressvar)
        elif aiProg.get() == "fast":
            setAIResearchStages(researchSpeed=fastProgressvar)
        else:
            setAIResearchStages(researchSpeed=normalProgressvar)

        messagebox.showinfo("Saved", "Values Saved")
        aiResearchWindow.destroy()

    normalProButton = Radiobutton(aiResearchWindow, text="Normal AI Progression", variable=aiProg,value="normal")
    normalProButton.pack()
    slow30ProButton = Radiobutton(aiResearchWindow, text="30% Slower AI Progression", variable=aiProg, value="slow30")
    slow30ProButton.pack()
    slow60ProButton = Radiobutton(aiResearchWindow, text="60% Slower AI Progression", variable=aiProg,value="slow60")
    slow60ProButton.pack()
    fastProButton = Radiobutton(aiResearchWindow, text="Faster AI Progression", variable=aiProg,value="fast")
    fastProButton.pack()
    saveButton = Button(aiResearchWindow, text="Save changes", command=savechanges)
    saveButton.pack()
