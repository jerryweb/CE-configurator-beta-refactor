from tkinter import *
from tkinter import messagebox

def aiResearches(rootWindow,fileToRead):
    aiResearchWindow = Toplevel(rootWindow)
    aiResearchWindow.title("Change AI Research Speed")
    aiResearchWindow.geometry('400x350')
    aiResearchWindow.focus_force()

    aiProg= StringVar(value="normal")

    normalProgressvar = '{ResearchStages "0:1 1:2 2:3 3:4 4:5 5:6 6:7 7:8 8:9 9:10 10:11 11:12 12:13 13:14 14:15 15:16 16:17 17:18 18:19 19:20"}'
    slow30Progressvar = '{ResearchStages "0:1 1:1 2:2 3:2 4:3 5:4 6:5 7:6 8:7 9:8 10:9 11:10 12:11 13:12 14:13 15:14 16:15 17:16 18:17 19:18 20:19 21:20"}'
    slow60Progressvar = '{ResearchStages "0:1 1:1 2:2 3:2 4:2 5:3 6:3 7:4 8:4 9:5 10:5 11:6 12:7 13:8 14:9 15:9 16:10 17:11 18:12 19:13 20:14 21:15 22:16 23:17 24:18 25:19 25:20"}'
    fastProgressvar = '{ResearchStages "0:2 1:2 2:4 3:4 4:6 5:6 6:8 7:8 8:10 9:10 10:12 11:13 12:14 13:15 14:16 15:18 16:19 17:20"}'

    print(aiProg.get())

    wholeFile = open(fileToRead, "r").read()
    progressLength = wholeFile.replace(fastProgressvar, normalProgressvar)
    progressLength = progressLength.replace(slow30Progressvar, normalProgressvar)
    progressLength = progressLength.replace(slow60Progressvar, normalProgressvar)
    progressLength = progressLength.replace(normalProgressvar, normalProgressvar)
    # if difficulty.get() == "performance":
    #     fileToRead = "./resource/set/dynamic_campaign/dcg_easy.inc"
    #     with open(fileToRead, "r") as lengthFile:
    #           wholeFile = lengthFile.read()
    #         # currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_easy.inc", 37)
    #       #   currentLength2 = r"BotResources +\d+"
    #      #    currentLength3 = str(re.search(currentLength2, wholeFile).group())
    #       #   currentLength4 = currentLength3.strip("[']")
    #           currentLength5 = wholeFile.replace(fastProgressvar, normalProgressvar)
    #           currentLength6 = currentLength5.replace(slow30Progressvar, normalProgressvar)
    #           currentLength7 = currentLength6.replace(slow60Progressvar, normalProgressvar)
    #           currentLength8 = currentLength7.replace(normalProgressvar, normalProgressvar)
    #
    #
    #
    #
    # elif difficulty.get() == "hard":
    #     fileToRead = "./resource/set/dynamic_campaign/dcg_hard.inc"
    #     with open(fileToRead, "r") as lengthFile:
    #         wholeFile = lengthFile.read()
    #         currentLength5 = wholeFile.replace(fastProgressvar, normalProgressvar)
    #         currentLength6 = currentLength5.replace(slow30Progressvar, normalProgressvar)
    #         currentLength7 = currentLength6.replace(slow60Progressvar, normalProgressvar)
    #         currentLength8 = currentLength7.replace(normalProgressvar, normalProgressvar)
    #
    # elif difficulty.get() == "normal":
    #     fileToRead = "./resource/set/dynamic_campaign/dcg_normal.inc"
    #     with open(fileToRead, "r") as lengthFile:
    #         wholeFile = lengthFile.read()
    #         currentLength5 = wholeFile.replace(fastProgressvar, normalProgressvar)
    #         currentLength6 = currentLength5.replace(slow30Progressvar, normalProgressvar)
    #         currentLength7 = currentLength6.replace(slow60Progressvar, normalProgressvar)
    #         currentLength8 = currentLength7.replace(normalProgressvar, normalProgressvar)
    #
    #
    #
    #
    # elif difficulty.get() == "unfair":
    #     fileToRead = "./resource/set/dynamic_campaign/dcg_heroic.inc"
    #     with open(fileToRead, "r") as lengthFile:
    #         wholeFile = lengthFile.read()
    #
    #         currentLength5 = wholeFile.replace(fastProgressvar, normalProgressvar)
    #         currentLength6 = currentLength5.replace(slow30Progressvar, normalProgressvar)
    #         currentLength7 = currentLength6.replace(slow60Progressvar, normalProgressvar)
    #         currentLength8 = currentLength7.replace(normalProgressvar, normalProgressvar)

    def savechanges():
        if aiProg.get() == "slow30":

            currentLength8 = currentLength7.replace(normalProgressvar, slow30Progressvar)
            print(currentLength8)

            with open(fileToRead, "w") as lengthFile:
                lengthFile.write(currentLength8)

            messagebox.showinfo("Saved")

            aiResearchWindow.destroy()
        if aiProg.get() == "slow60":

            currentLength8 = currentLength7.replace(normalProgressvar, slow60Progressvar)
            print(currentLength8)

            with open(fileToRead, "w") as lengthFile:
                lengthFile.write(currentLength8)

            messagebox.showinfo("Saved")

            aiResearchWindow.destroy()

        if aiProg.get() == "fast":
            currentLength8 = currentLength7.replace(normalProgressvar, fastProgressvar)
            print(currentLength8)

            with open(fileToRead, "w") as lengthFile:
                lengthFile.write(currentLength8)

            messagebox.showinfo("Saved")

            aiResearchWindow.destroy()
        if aiProg.get() == "normal":
            currentLength8 = currentLength7.replace(normalProgressvar, normalProgressvartProgressvar)
            print(currentLength8)

            with open(fileToRead, "w") as lengthFile:
                lengthFile.write(currentLength8)

            messagebox.showinfo("Saved")

            aiResearchWindow.destroy()


    saveButton = Button(aiResearchWindow, text="Save changes", command=savechanges)
    saveButton.grid(row=8, column=2, padx=3)
    normalPro = Radiobutton(aiResearchWindow, text="Normal AI progression", variable=aiProg,value="normal")
    normalPro.grid(row=2, column=1)
    slow30Pro = Radiobutton(aiResearchWindow, text="30% slower AI progression", variable=aiProg, value="slow30")
    slow30Pro.grid(row=3, column=1)
    slow60Pro = Radiobutton(aiResearchWindow, text="60% slower AI progression", variable=aiProg,value="slow60")
    slow60Pro.grid(row=4, column=1)
    fastPro = Radiobutton(aiResearchWindow, text="Faster AI progression", variable=aiProg,value="fast")
    fastPro.grid(row=5, column=1)
