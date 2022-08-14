from tkinter import *
from tkinter import messagebox

import linecache
import re
root = Tk()
root.title("CE Configurator")
root.geometry("500x500")

my_text = Text (root)




generallabel = Label(root, text="I want to change")
generallabel.grid(row=1,column=1)

global difficulty
difficulty = StringVar(value="normal")
performance =Radiobutton(root, text="performance(easy)", variable=difficulty,value="performance").grid(row=5,column=2)
normal = Radiobutton(root, text="normal", variable=difficulty,value="normal").grid(row=2,column=2)
hard = Radiobutton(root, text="hard", variable=difficulty,value="hard").grid(row=3,column=2)
unfair = Radiobutton(root, text="unfair", variable=difficulty,value="unfair").grid(row=4,column=2)

choosedifficulty =Label(root, text="Choose your difficulty before changing anything").grid(row=1,column=2)


def aiArmySize():
    aiSizeWindow = Toplevel(root)

    aiSizeWindow.title("AI army size")
    aiSizeWindow.geometry('700x150')
    aiSizeCurrent = ""
    if difficulty.get() == "performance":
         fileToRead = "./resource/set/dynamic_campaign/dcg_easy.inc"
         with open(fileToRead, "r") as lengthFile:
             wholeFile = lengthFile.read()
             #currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_easy.inc", 37)
             currentLength2 = r"BotResources +\d+"
             currentLength3 = str(re.search(currentLength2, wholeFile).group())
             currentLength4 = currentLength3.strip("[']")
             currentLength5 = currentLength4.replace("BotResources","").strip()


             print(currentLength3)

    elif difficulty.get() == "hard":
        fileToRead = "./resource/set/dynamic_campaign/dcg_hard.inc"
        with open(fileToRead, "r") as lengthFile:
            wholeFile = lengthFile.read()
            # currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_easy.inc", 37)
            currentLength2 = r"BotResources +\d+"
            currentLength3 = str(re.search(currentLength2, wholeFile).group())
            currentLength4 = currentLength3.strip("[']")
            currentLength5 = currentLength4.replace("BotResources", "").strip()

    elif difficulty.get() == "normal":
        fileToRead = "./resource/set/dynamic_campaign/dcg_normal.inc"
        with open(fileToRead, "r") as lengthFile:
            wholeFile = lengthFile.read()
            # currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_easy.inc", 37)
            currentLength2 = r"BotResources +\d+"
            currentLength3 = str(re.search(currentLength2, wholeFile).group())
            currentLength4 = currentLength3.strip("[']")
            currentLength5 = currentLength4.replace("BotResources", "").strip()



    elif difficulty.get() == "unfair":
        fileToRead = "./resource/set/dynamic_campaign/dcg_heroic.inc"
        with open(fileToRead, "r") as lengthFile:
            wholeFile = lengthFile.read()
            # currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_easy.inc", 37)
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

    aiSizeWindow = Label(aiSizeWindow,text=f"Current AI army size multiplier is {currentLength5}. Normally it's between 6 and 7").grid(row=1, column=2)

aiarmy = Button(root, text="AI army size", command=aiArmySize)
aiarmy.grid(row=2,column=1)

def playerArmySize():
    playerSizeWindow = Toplevel(root)

    playerSizeWindow.title("AI army size")
    playerSizeWindow.geometry('700x150')
    playerSizeCurrent = ""

    eachStageSize = StringVar()
    wholeBudget = StringVar()

    if difficulty.get() == "performance":
        fileToRead = "./resource/set/dynamic_campaign/dcg_easy.inc"
        with open(fileToRead, "r") as lengthFile:
            wholeFile = lengthFile.read()
            currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_easy.inc", 3)
            #currentLength2 = r"StageCP +\d+"
            #currentLength3 = str(re.search(currentLength2, currentLength).group())
          #  currentLength4 = currentLength3.lstrip
            currentLength5 = currentLength.replace("	{StageCP ", "").strip()
            currentLength6 = currentLength5.replace("}", "").strip()
            eachStageSize.set(currentLength6)

            # print(wholeFile)

            currentLength1 = linecache.getline(r"./resource/set/dynamic_campaign/dcg_easy.inc", 94)
            currentLength22 = r"[\d]+\d"
            currentLength33 = str(re.search(currentLength22, currentLength1).group())
            currentLength44 = currentLength33.strip("[']")
            currentLength55 = currentLength1.replace('				{Start "', '').strip()
            currentLength66 = currentLength55.replace('"', '').strip()
            wholeBudget.set(currentLength55)

            #print(currentLength3)

    elif difficulty.get() == "hard":
        fileToRead = "./resource/set/dynamic_campaign/dcg_hard.inc"
        with open(fileToRead, "r") as lengthFile:
            wholeFile = lengthFile.read()
            currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_hard.inc", 3)
            # currentLength2 = r"StageCP +\d+"
            # currentLength3 = str(re.search(currentLength2, currentLength).group())
            #  currentLength4 = currentLength3.lstrip
            currentLength5 = currentLength.replace("	{StageCP ", "").strip()
            currentLength6 = currentLength5.replace("}", "").strip()
            eachStageSize.set(currentLength6)

            # print(wholeFile)

            currentLength1 = linecache.getline(r"./resource/set/dynamic_campaign/dcg_hard.inc", 94)
            currentLength22 = r"[\d]+\d"
            currentLength33 = str(re.search(currentLength22, currentLength1).group())
            currentLength44 = currentLength33.strip("[']")
            currentLength55 = currentLength1.replace('				{Start "', '').strip()
            currentLength66 = currentLength55.replace('"', '').strip()
            wholeBudget.set(currentLength55)

    elif difficulty.get() == "normal":
        fileToRead = "./resource/set/dynamic_campaign/dcg_normal.inc"
        with open(fileToRead, "r") as lengthFile:
            wholeFile = lengthFile.read()
            currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_normal.inc", 3)
            # currentLength2 = r"StageCP +\d+"
            # currentLength3 = str(re.search(currentLength2, currentLength).group())
            #  currentLength4 = currentLength3.lstrip
            currentLength5 = currentLength.replace("	{StageCP ", "").strip()
            currentLength6 = currentLength5.replace("}", "").strip()
            eachStageSize.set(currentLength6)

            # print(wholeFile)

            currentLength1 = linecache.getline(r"./resource/set/dynamic_campaign/dcg_normal.inc", 94)
            currentLength22 = r"[\d]+\d"
            currentLength33 = str(re.search(currentLength22, currentLength1).group())
            currentLength44 = currentLength33.strip("[']")
            currentLength55 = currentLength1.replace('				{Start "', '').strip()
            currentLength66 = currentLength55.replace('"', '').strip()
            wholeBudget.set(currentLength55)



    elif difficulty.get() == "unfair":
        fileToRead = "./resource/set/dynamic_campaign/dcg_heroic.inc"
        with open(fileToRead, "r") as lengthFile:
            wholeFile = lengthFile.read()
            currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_heroic.inc", 3)
            # currentLength2 = r"StageCP +\d+"
            # currentLength3 = str(re.search(currentLength2, currentLength).group())
            #  currentLength4 = currentLength3.lstrip
            currentLength5 = currentLength.replace("	{StageCP ", "").strip()
            currentLength6 = currentLength5.replace("}", "").strip()
            eachStageSize.set(currentLength6)

            # print(wholeFile)

            currentLength1 = linecache.getline(r"./resource/set/dynamic_campaign/dcg_heroic.inc", 94)
            currentLength22 = r"[\d]+\d"
            currentLength33 = str(re.search(currentLength22, currentLength1).group())
            currentLength44 = currentLength33.strip("[']")
            currentLength55 = currentLength1.replace('				{Start "', '').strip()
            currentLength66 = currentLength55.replace('"', '').strip()
            wholeBudget.set(currentLength55)

    def savechanges():
        with open(fileToRead, "w") as lengthFile:

            newPoints2 = str(eachStageSize.get())
            newPoints3 = str(wholeBudget.get())



            newf = (wholeFile.replace(currentLength, str(f"	{{StageCP {newPoints2} }} \n")))
            newf2 = (newf.replace(currentLength1, str(f'				{{Start 0:"{newPoints3}"}}\n')))

            lengthFile.write(newf2)
            playerSizeWindow.destroy()

    currentPoints = Entry(playerSizeWindow, textvariable=eachStageSize, width=50)
    currentPoints.delete(0, END)
    currentPoints.insert(0, currentLength6)
    currentPoints.grid(row=2, column=1)

    currentBudget = Entry(playerSizeWindow, textvariable=wholeBudget, width=50)
    currentBudget.delete(0, END)
    currentBudget.insert(0, currentLength33)
    currentBudget.grid(row=4, column=1)

    saveButton = Button(playerSizeWindow, text="Save changes", command=savechanges)
    saveButton.grid(row=4, column=1, padx=3)

    playerLabel = Label(playerSizeWindow, text=f"Size of each stage. keep the space between each number and it should be 7 numbers").grid(row=1,column=1)
    playerLabel2 = Label(playerSizeWindow, text=f"How much points you have in the battle to buy these stages(in mod you're supposed to only have enough for 5)").grid(row=3, column=1)


playerarmy = Button(root, text="Player army size", command=playerArmySize)
playerarmy.grid(row=3,column=1)

def preparationTime():
    preparationWindow = Toplevel(root)

    preparationWindow.title("Time before AI arrives")
    preparationWindow.geometry('800x250')

    preparationTime1 = StringVar()
    preparationTime2 = StringVar()
    preparationTime3 = StringVar()
    preparationTime4 = StringVar()
    preparationTime5 = StringVar()

    fileToRead = "./resource/conquest_configuration/bot.conquest_configuration.lua"
    with open(fileToRead, "r") as lengthFile:
        wholeFile = lengthFile.read()
        currentLength = linecache.getline(r"./resource/conquest_configuration/bot.conquest_configuration.lua", 16)
       # currentLength2 = r"StartVal +\d+"
       # currentLength3 = str(re.search(currentLength2, currentLength).group())
      #  currentLength4 = currentLength3.strip("[']")
        currentLength5 = currentLength.replace("	oneFlagOffsetTime = ", "").strip()
        preparationTime1.set(currentLength5)

        # print(wholeFile)

        currentLength1 = linecache.getline(r"./resource/conquest_configuration/bot.conquest_configuration.lua", 23)
       # currentLength22 = r"StartVal +\d+"
       # currentLength33 = str(re.search(currentLength22, currentLength1).group())
       # currentLength44 = currentLength33.strip("[']")
        currentLength55 = currentLength1.replace("	twoFlagOffsetTime = ", "").strip()
        preparationTime2.set(currentLength55)

        currentLength11 = linecache.getline(r"./resource/conquest_configuration/bot.conquest_configuration.lua", 19)
       # currentLength222 = r"StartVal +\d+"
       # currentLength333 = str(re.search(currentLength222, currentLength11).group())
       # currentLength444 = currentLength333.strip("[']")
        currentLength555 = currentLength11.replace("	threeFlagOffsetTime = ", "").strip()
        preparationTime3.set(currentLength555)

        currentLength111 = linecache.getline(r"./resource/conquest_configuration/bot.conquest_configuration.lua", 20)
       # currentLength2222 = r"StartVal +\d+"
        #currentLength3333 = str(re.search(currentLength2222, currentLength111).group())
       # currentLength4444 = currentLength3333.strip("[']")
        currentLength5555 = currentLength111.replace("	fourFlagOffsetTime = ", "").strip()
        preparationTime4.set(currentLength5555)

        currentLength1111 = linecache.getline(r"./resource/conquest_configuration/bot.conquest_configuration.lua", 24)
       # currentLength22222 = r"StartVal +\d+"
       # currentLength33333 = str(re.search(currentLength22222, currentLength1111).group())
      #  currentLength44444 = currentLength33333.strip("[']")
        currentLength55555 = currentLength1111.replace("	fiveFlagOffsetTime = ", "").strip()
        preparationTime5.set(currentLength55555)

        def savechanges():
            with open(fileToRead, "w") as lengthFile:
                newPoints2 = str(preparationTime1.get())
                newPoints3 = str(preparationTime2.get())
                newPoints4 = str(preparationTime3.get())
                newPoints5 = str(preparationTime4.get())
                newPoints6 = str(preparationTime5.get())

                newf = (wholeFile.replace(currentLength, str(f"	oneFlagOffsetTime = {newPoints2} \n")))
                newf2 = (newf.replace(currentLength1, str(f"	twoFlagOffsetTime = {newPoints3} \n")))
                newf3 = (newf2.replace(currentLength11, str(f"	threeFlagOffsetTime = {newPoints4} \n")))
                newf4 = (newf3.replace(currentLength111, str(f"	fourFlagOffsetTime = {newPoints5} \n")))
                newf5 = (newf4.replace(currentLength1111, str(f"	fiveFlagOffsetTime = {newPoints6} \n")))

                lengthFile.write(newf5)
                messagebox.showinfo("Saved")
                # lengthFile.write(wholeFile.replace(currentLength44, str(f"StartVal {newPoints3}")))
                #  lengthFile.write(wholeFile.replace(currentLength444, str(f"StartVal {newPoints4}")))
                #  lengthFile.write(wholeFile.replace(currentLength4444, str(f"StartVal {newPoints5}")))
                preparationWindow.destroy()

    preparationTimesspin1 = Spinbox(preparationWindow, from_=1.0, to=10000.0, textvariable=preparationTime1).grid(row=2, column=1)
    preparationTimesspin2 = Spinbox(preparationWindow, from_=1.0, to=10000.0, textvariable=preparationTime2).grid(row=4, column=1)
    preparationTimesspin3 = Spinbox(preparationWindow, from_=1.0, to=10000.0, textvariable=preparationTime3).grid(row=6, column=1)
    preparationTimesspin4 = Spinbox(preparationWindow, from_=1.0, to=10000.0, textvariable=preparationTime4).grid(row=8, column=1)
    preparationTimesspin5 = Spinbox(preparationWindow, from_=1.0, to=10000.0, textvariable=preparationTime5).grid(row=10,column=1)


    preparationTimeslabel = Label(preparationWindow, text="Time in seconds before AI comes in 1 flag missions (early defenses)").grid(row=1, column=1)
    preparationTimeslabel = Label(preparationWindow, text="Time in seconds before AI comes in 2 flag missions (mid defenses)").grid(row=3,column=1)
    preparationTimeslabel = Label(preparationWindow, text="Time in seconds before AI comes in 3 flag missions (mid attacks)").grid(row=5,column=1)
    preparationTimeslabel = Label(preparationWindow, text="Time in seconds before AI comes in 4 flag missions (late attacks)").grid(row=7,column=1)
    preparationTimeslabel = Label(preparationWindow, text="Time in seconds before AI comes in 2 flag missions (late defenses)").grid(row=9,column=1)

    saveButton = Button(preparationWindow, text="Save changes", command=savechanges)
    saveButton.grid(row=6, column=3, padx=3)


preparation = Button(root, text="Preparation time", command=preparationTime)
preparation.grid(row=4,column=1)

def resourceStarting():
    resourceStartingWindow = Toplevel(root)

    resourceStartingWindow.title("Resources at the start of campaign")
    resourceStartingWindow.geometry('300x250')

    researchPoints = StringVar()
    manPowerPoints = StringVar()
    starCallPoints = StringVar()
    ammoPoints = StringVar()

    researchPointsspin = Spinbox(resourceStartingWindow, from_=1.0, to=10000.0, textvariable=researchPoints).grid(row=1, column=1)
    manPowerPointspin = Spinbox(resourceStartingWindow, from_=1.0, to=100000.0, textvariable=manPowerPoints).grid(row=2, column=1)
    starCallPointsspin = Spinbox(resourceStartingWindow, from_=1.0, to=10000.0, textvariable=starCallPoints).grid(row=3, column=1)
    ammoPointsspin = Spinbox(resourceStartingWindow, from_=1.0, to=10000.0, textvariable=ammoPoints).grid(row=4, column=1)


    if difficulty.get() == "performance":
        fileToRead = "./resource/set/dynamic_campaign/dcg_easy.inc"
        with open(fileToRead, "r") as lengthFile:
            wholeFile = lengthFile.read()
            currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_easy.inc", 55)
            currentLength2 = r"StartVal +\d+"
            currentLength3 = str(re.search(currentLength2, currentLength).group())
            currentLength4 = currentLength3.strip("[']")
            currentLength5 = currentLength4.replace("StartVal ", "").strip()
            manPowerPoints.set(currentLength5)

            # print(wholeFile)

            currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_easy.inc", 67)
            currentLength22 = r"StartVal +\d+"
            currentLength33 = str(re.search(currentLength22, currentLength).group())
            currentLength44 = currentLength33.strip("[']")
            currentLength55 = currentLength44.replace("StartVal ", "").strip()
            starCallPoints.set(currentLength55)

            currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_easy.inc", 75)
            currentLength222 = r"StartVal +\d+"
            currentLength333 = str(re.search(currentLength222, currentLength).group())
            currentLength444 = currentLength333.strip("[']")
            currentLength555 = currentLength444.replace("StartVal ", "").strip()
            ammoPoints.set(currentLength555)

            currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_easy.inc", 84)
            currentLength2222 = r"StartVal +\d+"
            currentLength3333 = str(re.search(currentLength2222, currentLength).group())
            currentLength4444 = currentLength3333.strip("[']")
            currentLength5555 = currentLength4444.replace("StartVal ", "").strip()
            researchPoints.set(currentLength5555)





    elif difficulty.get() == "hard":
        fileToRead = "./resource/set/dynamic_campaign/dcg_hard.inc"
        with open(fileToRead, "r") as lengthFile:
            wholeFile = lengthFile.read()
            currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_hard.inc", 55)
            currentLength2 = r"StartVal +\d+"
            currentLength3 = str(re.search(currentLength2, currentLength).group())
            currentLength4 = currentLength3.strip("[']")
            currentLength5 = currentLength4.replace("StartVal ", "").strip()
            manPowerPoints.set(currentLength5)

            # print(wholeFile)

            currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_hard.inc", 67)
            currentLength22 = r"StartVal +\d+"
            currentLength33 = str(re.search(currentLength22, currentLength).group())
            currentLength44 = currentLength33.strip("[']")
            currentLength55 = currentLength44.replace("StartVal ", "").strip()
            starCallPoints.set(currentLength55)

            currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_hard.inc", 75)
            currentLength222 = r"StartVal +\d+"
            currentLength333 = str(re.search(currentLength222, currentLength).group())
            currentLength444 = currentLength333.strip("[']")
            currentLength555 = currentLength444.replace("StartVal ", "").strip()
            ammoPoints.set(currentLength555)

            currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_hard.inc", 84)
            currentLength2222 = r"StartVal +\d+"
            currentLength3333 = str(re.search(currentLength2222, currentLength).group())
            currentLength4444 = currentLength3333.strip("[']")
            currentLength5555 = currentLength4444.replace("StartVal ", "").strip()
            researchPoints.set(currentLength5555)

    elif difficulty.get() == "normal":
        fileToRead = "./resource/set/dynamic_campaign/dcg_normal.inc"
        with open(fileToRead, "r") as lengthFile:
            wholeFile = lengthFile.read()
            currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_normal.inc", 55)
            currentLength2 = r"StartVal +\d+"
            currentLength3 = str(re.search(currentLength2, currentLength).group())
            currentLength4 = currentLength3.strip("[']")
            currentLength5 = currentLength4.replace("StartVal ", "").strip()
            manPowerPoints.set(currentLength5)

            # print(wholeFile)

            currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_normal.inc", 67)
            currentLength22 = r"StartVal +\d+"
            currentLength33 = str(re.search(currentLength22, currentLength).group())
            currentLength44 = currentLength33.strip("[']")
            currentLength55 = currentLength44.replace("StartVal ", "").strip()
            starCallPoints.set(currentLength55)

            currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_normal.inc", 75)
            currentLength222 = r"StartVal +\d+"
            currentLength333 = str(re.search(currentLength222, currentLength).group())
            currentLength444 = currentLength333.strip("[']")
            currentLength555 = currentLength444.replace("StartVal ", "").strip()
            ammoPoints.set(currentLength555)

            currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_normal.inc", 84)
            currentLength2222 = r"StartVal +\d+"
            currentLength3333 = str(re.search(currentLength2222, currentLength).group())
            currentLength4444 = currentLength3333.strip("[']")
            currentLength5555 = currentLength4444.replace("StartVal ", "").strip()
            researchPoints.set(currentLength5555)



    elif difficulty.get() == "unfair":
        fileToRead = "./resource/set/dynamic_campaign/dcg_heroic.inc"
        with open(fileToRead, "r") as lengthFile:
            wholeFile = lengthFile.read()
            currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_heroic.inc", 55)
            currentLength2 = r"StartVal +\d+"
            currentLength3 = str(re.search(currentLength2, currentLength).group())
            currentLength4 = currentLength3.strip("[']")
            currentLength5 = currentLength4.replace("StartVal ", "").strip()
            manPowerPoints.set(currentLength5)

            # print(wholeFile)

            currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_heroic.inc", 67)
            currentLength22 = r"StartVal +\d+"
            currentLength33 = str(re.search(currentLength22, currentLength).group())
            currentLength44 = currentLength33.strip("[']")
            currentLength55 = currentLength44.replace("StartVal ", "").strip()
            starCallPoints.set(currentLength55)

            currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_heroic.inc", 75)
            currentLength222 = r"StartVal +\d+"
            currentLength333 = str(re.search(currentLength222, currentLength).group())
            currentLength444 = currentLength333.strip("[']")
            currentLength555 = currentLength444.replace("StartVal ", "").strip()
            ammoPoints.set(currentLength555)

            currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_heroic.inc", 84)
            currentLength2222 = r"StartVal +\d+"
            currentLength3333 = str(re.search(currentLength2222, currentLength).group())
            currentLength4444 = currentLength3333.strip("[']")
            currentLength5555 = currentLength4444.replace("StartVal ", "").strip()
            researchPoints.set(currentLength5555)

    def savechanges():
        with open(fileToRead, "w") as lengthFile:

            newPoints2 = str(manPowerPoints.get())
            newPoints3 = str(starCallPoints.get())
            newPoints4 = str(ammoPoints.get())
            newPoints5 = str(researchPoints.get())

            newf = (wholeFile.replace(currentLength4, str(f"StartVal {newPoints2}")))
            newf2 = (newf.replace(currentLength44, str(f"StartVal {newPoints3}")))
            newf3 = (newf2.replace(currentLength444, str(f"StartVal {newPoints4}")))
            newf4 = (newf3.replace(currentLength4444, str(f"StartVal {newPoints5}")))

            lengthFile.write(newf4)
            messagebox.showinfo("Saved")
            # lengthFile.write(wholeFile.replace(currentLength44, str(f"StartVal {newPoints3}")))
           #  lengthFile.write(wholeFile.replace(currentLength444, str(f"StartVal {newPoints4}")))
           #  lengthFile.write(wholeFile.replace(currentLength4444, str(f"StartVal {newPoints5}")))
            resourceStartingWindow.destroy()

      #  with open(fileToRead, "w") as lengthFile:
        #    newPoints3 = str(starCallPoints.get())
       #     lengthFile.write(wholeFile.replace(currentLength44, str(f"StartVal {newPoints3}")))
      #  with open(fileToRead, "w") as lengthFile:
       #     newPoints4 = str(starCallPoints.get())
       #     lengthFile.write(wholeFile.replace(currentLength444, str(f"StartVal {newPoints4}")))
      #  with open(fileToRead, "w") as lengthFile:
        #    newPoints5 = str(starCallPoints.get())
         #   lengthFile.write(wholeFile.replace(currentLength4444, str(f"StartVal {newPoints5}")))
         #   messagebox.showinfo("Saved")
        #    resourceStartingWindow.destroy()



    # currentPoints = Entry(fortificationWindow, textvariable=aiSizeCurrent, width=15)
    # secondLevelspin.delete(0, END)
    # secondLevelspin.insert(0, currentLength5)
    # currentPoints.grid(row=2, column=2)

    saveButton = Button(resourceStartingWindow, text="Save changes", command=savechanges)
    saveButton.grid(row=6, column=1, padx=3)


    researchPointslabel=Label(resourceStartingWindow, text="Starting research points").grid(row=1, column=2)
    manPowerPointlabel = Label(resourceStartingWindow, text="Starting manpower points").grid(row=2,column=2)
    starCallPointslabel = Label(resourceStartingWindow,text="Starting star points").grid(row=3, column=2)
    starCallPointslabel = Label(resourceStartingWindow, text="Starting ammo points").grid(row=4, column=2)


resourcesStart = Button(root, text="Resources at start", command=resourceStarting)
resourcesStart.grid(row=5,column=1)

def resourceIncome():
    resourceIncWindow = Toplevel(root)

    resourceIncWindow.title("Resource income multiplier")
    resourceIncWindow.geometry('700x250')

    lowRisk = StringVar()
    standartRisk = StringVar()
    highRisk = StringVar()


    lowRiskspin = Spinbox(resourceIncWindow, from_=1.00, to=100.00, textvariable=lowRisk).grid(row=3,column=1)
    standartRiskspin = Spinbox(resourceIncWindow, from_=1.00, to=100.00, textvariable=standartRisk).grid(row=4,column=1)
    highRiskspin = Spinbox(resourceIncWindow, from_=1.00, to=100.00, textvariable=highRisk).grid(row=5,column=1)


    if difficulty.get() == "performance":
        fileToRead = "./resource/set/dynamic_campaign/dcg_easy.inc"
        with open(fileToRead, "r") as lengthFile:
            wholeFile = lengthFile.read()
            currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_easy.inc", 39)
            #currentLength4 = currentLength.strip("}")
            currentLength5 = currentLength.replace("			{Rewards ", "").strip()
            lowRisk.set(currentLength5.replace("}",""))

            currentLength1 = linecache.getline(r"./resource/set/dynamic_campaign/dcg_easy.inc", 44)
           # currentLength44 = currentLength1.strip("}")
            currentLength55 = currentLength1.replace("			{Rewards ", "").strip()
            standartRisk.set(currentLength55.replace("}",""))

            currentLength11 = linecache.getline(r"./resource/set/dynamic_campaign/dcg_easy.inc", 49)
           # currentLength444 = currentLength11.strip("}")
            currentLength555 = currentLength11.replace("			{Rewards ", "").strip()
            highRisk.set((currentLength555.replace("}","")))



    elif difficulty.get() == "hard":
        fileToRead = "./resource/set/dynamic_campaign/dcg_hard.inc"
        with open(fileToRead, "r") as lengthFile:
            wholeFile = lengthFile.read()
            currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_hard.inc", 39)
            # currentLength4 = currentLength.strip("}")
            currentLength5 = currentLength.replace("			{Rewards ", "").strip()
            lowRisk.set(currentLength5.replace("}", ""))

            currentLength1 = linecache.getline(r"./resource/set/dynamic_campaign/dcg_hard.inc", 44)
            # currentLength44 = currentLength1.strip("}")
            currentLength55 = currentLength1.replace("			{Rewards ", "").strip()
            standartRisk.set(currentLength55.replace("}", ""))

            currentLength11 = linecache.getline(r"./resource/set/dynamic_campaign/dcg_hard.inc", 49)
            # currentLength444 = currentLength11.strip("}")
            currentLength555 = currentLength11.replace("			{Rewards ", "").strip()
            highRisk.set((currentLength555.replace("}", "")))

    elif difficulty.get() == "normal":
        fileToRead = "./resource/set/dynamic_campaign/dcg_normal.inc"
        with open(fileToRead, "r") as lengthFile:
            wholeFile = lengthFile.read()
            currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_normal.inc", 39)
            # currentLength4 = currentLength.strip("}")
            currentLength5 = currentLength.replace("			{Rewards ", "").strip()
            lowRisk.set(currentLength5.replace("}", ""))

            currentLength1 = linecache.getline(r"./resource/set/dynamic_campaign/dcg_normal.inc", 44)
            # currentLength44 = currentLength1.strip("}")
            currentLength55 = currentLength1.replace("			{Rewards ", "").strip()
            standartRisk.set(currentLength55.replace("}", ""))

            currentLength11 = linecache.getline(r"./resource/set/dynamic_campaign/dcg_normal.inc", 49)
            # currentLength444 = currentLength11.strip("}")
            currentLength555 = currentLength11.replace("			{Rewards ", "").strip()
            highRisk.set((currentLength555.replace("}", "")))




    elif difficulty.get() == "unfair":
        fileToRead = "./resource/set/dynamic_campaign/dcg_heroic.inc"
        with open(fileToRead, "r") as lengthFile:
            wholeFile = lengthFile.read()
            currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_heroic.inc", 39)
            # currentLength4 = currentLength.strip("}")
            currentLength5 = currentLength.replace("			{Rewards ", "").strip()
            lowRisk.set(currentLength5.replace("}", ""))

            currentLength1 = linecache.getline(r"./resource/set/dynamic_campaign/dcg_heroic.inc", 44)
            # currentLength44 = currentLength1.strip("}")
            currentLength55 = currentLength1.replace("			{Rewards ", "").strip()
            standartRisk.set(currentLength55.replace("}", ""))

            currentLength11 = linecache.getline(r"./resource/set/dynamic_campaign/dcg_heroic.inc", 49)
            # currentLength444 = currentLength11.strip("}")
            currentLength555 = currentLength11.replace("			{Rewards ", "").strip()
            highRisk.set((currentLength555.replace("}", "")))


    def savechanges():
        with open(fileToRead, "w") as lengthFile:
            newPoints2 = str(lowRisk.get().strip())
            newPoints3 = str(standartRisk.get().strip())
            newPoints4 = str(highRisk.get().strip())


            newf = (wholeFile.replace(currentLength, str(f"			{{Rewards {newPoints2}}}\n")))
            newf2 = (newf.replace(currentLength1, str(f"			{{Rewards {newPoints3}}}\n")))
            newf3 = (newf2.replace(currentLength11, str(f"			{{Rewards {newPoints4}}}\n")))


            lengthFile.write(newf3)
            messagebox.showinfo("Saved")
            # lengthFile.write(wholeFile.replace(currentLength44, str(f"StartVal {newPoints3}")))
            #  lengthFile.write(wholeFile.replace(currentLength444, str(f"StartVal {newPoints4}")))
            #  lengthFile.write(wholeFile.replace(currentLength4444, str(f"StartVal {newPoints5}")))
            resourceIncWindow.destroy()


    saveButton = Button(resourceIncWindow, text="Save changes", command=savechanges)
    saveButton.grid(row=6, column=1, padx=3)

    infoLabel = Label (resourceIncWindow, text="This is a multiplier depending on the risk level (Stars) of the mission.\n First is 1 star,second is 2 star and third is 3 star.")
    infoLabel.grid(row=1, column=1, padx=3)



resources = Button(root, text="Resource Income", command=resourceIncome)
resources.grid(row=6,column=1)

def aiFortifications():
    fortificationWindow = Toplevel(root)

    fortificationWindow.title("AI defense research speed")
    fortificationWindow.geometry('700x250')

    #firstLevel = StringVar()
    secondLevel = StringVar()
    thirdLevel = StringVar()

   # firstLevelspin = Spinbox(fortificationWindow, from_=1.0, to=100.0, textvariable=firstLevel).grid(row=1, column=1)
    secondLevelspin = Spinbox(fortificationWindow, from_=1.0, to=100.0, textvariable=secondLevel).grid(row=2, column=1)
    thirdLevelspin = Spinbox(fortificationWindow, from_=1.0, to=100.0, textvariable=thirdLevel).grid(row=3, column=1)


   # firstLevellabel=Label(fortificationWindow, text="Amount of missions played for first defense level to be researched").grid(row=1, column=2)
    secondLevellabel = Label(fortificationWindow, text="Amount of missions played for second defense level to be researched").grid(row=2,
                                                                                                            column=2)
    thirdLevellabel = Label(fortificationWindow,text="Amount of missions played for third defense level to be researched").grid(row=3,
                                                                                                            column=2)

    if difficulty.get() == "performance":
         fileToRead = "./resource/set/dynamic_campaign/dcg_easy.inc"
         with open(fileToRead, "r") as lengthFile:
             wholeFile = lengthFile.read()
             currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_easy.inc", 23)
             currentLength2 = r"unlock games +\d+"
             currentLength3 = str(re.search(currentLength2, currentLength).group())
             currentLength4 = currentLength3.strip("[']")
             currentLength5 = currentLength4.replace("unlock games ","").strip()
             secondLevel.set(currentLength5)

             #print(wholeFile)


             currentLength1 = linecache.getline(r"./resource/set/dynamic_campaign/dcg_easy.inc", 28)
             currentLength22 = r"unlock games +\d+"
             currentLength33 = str(re.search(currentLength22, currentLength1).group())
             currentLength44 = currentLength33.strip("[']")
             currentLength55 = currentLength44.replace("unlock games ", "").strip()
             thirdLevel.set(currentLength55)





    elif difficulty.get() == "hard":
        fileToRead = "./resource/set/dynamic_campaign/dcg_hard.inc"
        with open(fileToRead, "r") as lengthFile:
            wholeFile = lengthFile.read()
            currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_hard.inc", 23)
            currentLength2 = r"unlock games +\d+"
            currentLength3 = str(re.search(currentLength2, currentLength).group())
            currentLength4 = currentLength3.strip("[']")
            currentLength5 = currentLength4.replace("unlock games ", "").strip()
            secondLevel.set(currentLength5)

            # print(wholeFile)

            currentLength1 = linecache.getline(r"./resource/set/dynamic_campaign/dcg_hard.inc", 28)
            currentLength22 = r"unlock games +\d+"
            currentLength33 = str(re.search(currentLength22, currentLength1).group())
            currentLength44 = currentLength33.strip("[']")
            currentLength55 = currentLength44.replace("unlock games ", "").strip()
            thirdLevel.set(currentLength55)



    elif difficulty.get() == "normal":
        fileToRead = "./resource/set/dynamic_campaign/dcg_normal.inc"
        with open(fileToRead, "r") as lengthFile:
            wholeFile = lengthFile.read()
            currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_normal.inc", 23)
            currentLength2 = r"unlock games +\d+"
            currentLength3 = str(re.search(currentLength2, currentLength).group())
            currentLength4 = currentLength3.strip("[']")
            currentLength5 = currentLength4.replace("unlock games ", "").strip()
            secondLevel.set(currentLength5)

            # print(wholeFile)

            currentLength1 = linecache.getline(r"./resource/set/dynamic_campaign/dcg_normal.inc", 28)
            currentLength22 = r"unlock games +\d+"
            currentLength33 = str(re.search(currentLength22, currentLength1).group())
            currentLength44 = currentLength33.strip("[']")
            currentLength55 = currentLength44.replace("unlock games ", "").strip()
            thirdLevel.set(currentLength55)





    elif difficulty.get() == "unfair":
        fileToRead = "./resource/set/dynamic_campaign/dcg_heroic.inc"
        with open(fileToRead, "r") as lengthFile:
            wholeFile = lengthFile.read()
            currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_heroic.inc", 23)
            currentLength2 = r"unlock games +\d+"
            currentLength3 = str(re.search(currentLength2, currentLength).group())
            currentLength4 = currentLength3.strip("[']")
            currentLength5 = currentLength4.replace("unlock games ", "").strip()
            secondLevel.set(currentLength5)

            # print(wholeFile)

            currentLength1 = linecache.getline(r"./resource/set/dynamic_campaign/dcg_heroic.inc", 28)
            currentLength22 = r"unlock games +\d+"
            currentLength33 = str(re.search(currentLength22, currentLength1).group())
            currentLength44 = currentLength33.strip("[']")
            currentLength55 = currentLength44.replace("unlock games ", "").strip()
            thirdLevel.set(currentLength55)



    def savechanges():
         with open(fileToRead, "w") as lengthFile:


              newPoints2 = str(secondLevel.get())
              newPoints3 = str(thirdLevel.get())
              newf = (wholeFile.replace(currentLength, str(f"				{{unlock games {newPoints2}}}\n")))
              newf2 = (newf.replace(currentLength1, str(f"				{{unlock games {newPoints3}}}\n")))
              lengthFile.write(newf2)
              messagebox.showinfo("Saved")

              fortificationWindow.destroy()







    #currentPoints = Entry(fortificationWindow, textvariable=aiSizeCurrent, width=15)
   # secondLevelspin.delete(0, END)
   # secondLevelspin.insert(0, currentLength5)
   # currentPoints.grid(row=2, column=2)

    saveButton = Button(fortificationWindow, text="Save changes", command=savechanges)
    saveButton.grid(row=4, column=1, padx=3)
    #saveButton = Button(fortificationWindow, text="Save changes for 3rd level", command=savechanges2)
    #saveButton.grid(row=5, column=1, padx=3)

    fortificationWindowlabel = Label(fortificationWindow,text=f"Change how many battles it takes for AI to reseach 2 and 3 defense level.").grid(row=1, column=2)


aiFortification = Button(root, text="AI defense stage research speed", command=aiFortifications)
aiFortification.grid(row=7,column=1)

def damages():
    damageWindow = Toplevel(root)

    damageWindow.title("Enable or disable modded bullet damage")
    damageWindow.geometry('300x250')

    damageModevar = StringVar(value="Mod Damage")


    modDamage = Radiobutton(damageWindow, text="Modded damage", variable=damageModevar, value="Mod Damage")
    modDamage.grid(row=1, column=1)
    vanillaDamage = Radiobutton(damageWindow, text="Vanilla damage", variable=damageModevar,value="Vanilla Damage")
    vanillaDamage.grid(row=2, column=1)

    def savechanges():
        if damageModevar.get() == "Mod Damage":
            with open("./configurator files/moddedballistics.set", "r") as lengthFile:
                wholeFile = lengthFile.read()

            with open("./resource/set/ballistics.set", "w") as lengthFile:
                lengthFile.write(wholeFile)

            messagebox.showinfo("Saved")
            damageWindow.destroy()
        else:
            with open("./configurator files/vanillaballistics.set", "r") as lengthFile:
                wholeFile = lengthFile.read()

            with open("./resource/set/ballistics.set", "w") as lengthFile:
                lengthFile.write(wholeFile)

            messagebox.showinfo("Saved")
            damageWindow.destroy()
    saveButton = Button(damageWindow, text="Save changes", command=savechanges)
    saveButton.grid(row=3, column=2, padx=3)

damage = Button(root, text="Vanilla or mod damage settings", command=damages)
damage.grid(row=8,column=1)

def resupplies():
    resupplyWindow = Toplevel(root)

    resupplyWindow.title("Enable or disable resupplying enemy equipment")


    resupplyAm = StringVar(value="notResupplying")

    noResupply = Radiobutton(resupplyWindow, text="Resupplying enemy equipment NOT allowed", variable=resupplyAm,value="notResupplying")
    noResupply.grid(row=1, column=1)
    yesResupply = Radiobutton(resupplyWindow, text="Resupplying enemy equipment allowed", variable=resupplyAm,value="Resupplying")
    yesResupply.grid(row=2,column=1)

    def savechanges():
       if resupplyAm.get()== "Resupplying":
           with open("./resource/properties/resupply.inc", "r") as lengthFile:
               gerDefault = str('("items_light_generic")	("items_light_ger")	("items_heavy_ger")	("items_light_fin")	("items_heavy_fin") ("items_heavy_generic")')
               sovDefault = str('("items_light_generic")	("items_light_rus")	("items_light_eng")	("items_light_usa")	("items_heavy_rus")	("items_heavy_eng")	("items_heavy_generic")')
               gerNew = str('("items_light_generic")	("items_light_ger")	("items_heavy_ger")	("items_light_fin")	("items_heavy_fin") ("items_heavy_generic")("items_light_rus")	("items_light_eng")	("items_light_usa")	("items_heavy_rus")	("items_heavy_eng")')
               sovNew = str('("items_light_generic")	("items_light_rus")	("items_light_eng")	("items_light_usa")	("items_heavy_rus")	("items_heavy_eng")	("items_heavy_generic")("items_light_ger")	("items_heavy_ger")	("items_light_fin")	("items_heavy_fin")')
               wholeFile = lengthFile.read()
               wholeFile = wholeFile.replace(str(gerDefault),str(gerNew))
               wholeFile = wholeFile.replace(str(sovDefault), str(sovNew))
           with open("./resource/properties/resupply.inc", "w") as lengthFile:
               lengthFile.write(wholeFile)

           messagebox.showinfo("Saved")
           resupplyWindow.destroy()
       else:
           with open("./resource/properties/resupply.inc", "r") as lengthFile:
               gerDefault = str('("items_light_generic")	("items_light_ger")	("items_heavy_ger")	("items_light_fin")	("items_heavy_fin") ("items_heavy_generic")')
               sovDefault = str('("items_light_generic")	("items_light_rus")	("items_light_eng")	("items_light_usa")	("items_heavy_rus")	("items_heavy_eng")	("items_heavy_generic")')
               gerNew = str('("items_light_generic")	("items_light_ger")	("items_heavy_ger")	("items_light_fin")	("items_heavy_fin") ("items_heavy_generic")("items_light_rus")	("items_light_eng")	("items_light_usa")	("items_heavy_rus")	("items_heavy_eng")')
               sovNew = str('("items_light_generic")	("items_light_rus")	("items_light_eng")	("items_light_usa")	("items_heavy_rus")	("items_heavy_eng")	("items_heavy_generic")("items_light_ger")	("items_heavy_ger")	("items_light_fin")	("items_heavy_fin")')
               wholeFile = lengthFile.read()
               wholeFile = wholeFile.replace(str(gerNew), str(gerDefault))
               wholeFile = wholeFile.replace(str(sovNew), str(sovDefault))
           with open("./resource/properties/resupply.inc", "w") as lengthFile:
               lengthFile.write(wholeFile)
           messagebox.showinfo("Saved")
           resupplyWindow.destroy()
       # with open("./resource/set/multiplayer/games/campaign_capture_the_flag.set", "w") as lengthFile:

           # newPoints=str(currentPoints.get())
           # lengthFile.write(wholeFile.replace(currentLength4,newPoints))






    saveButton = Button(resupplyWindow, text="Save changes", command=savechanges)
    saveButton.grid(row=3, column=2, padx=3)



resupply = Button(root, text="Resupply enemy equipment or not", command=resupplies)
resupply.grid(row=9,column=1)



def lengthGame():
    lengthWindow = Toplevel(root)

    lengthWindow.title("Changing amount of points to win")
    lengthWindow.geometry('700x150')
    currentLength= ""
    with open("./resource/set/multiplayer/games/campaign_capture_the_flag.set", "r") as lengthFile:
        wholeFile = lengthFile.read()
        currentLength = linecache.getline(r"./resource/set/multiplayer/games/campaign_capture_the_flag.set", 44)
        currentLength2 = r"[0-9]?[0-9]?[0-9]?[0-9]?[0-9]?[0-9]"
        currentLength3 = str((re.findall(currentLength2,currentLength)))
        currentLength4 = currentLength3.strip("[']")


    def savechanges():
        with open("./resource/set/multiplayer/games/campaign_capture_the_flag.set", "w") as lengthFile:

            newPoints=str(currentPoints.get())
            lengthFile.write(wholeFile.replace(currentLength4,newPoints))
            messagebox.showinfo("Saved")
            lengthWindow.destroy()


    currentPoints = Entry(lengthWindow,textvariable=currentLength4,width=15)
    currentPoints.delete(0, END)
    currentPoints.insert(0, currentLength4)
    currentPoints.grid(row=2,column=2)


    saveButton = Button(lengthWindow, text="Save changes", command=savechanges)
    saveButton.grid(row=3, column=2, padx=3)

    tipLength = Label(lengthWindow,text=" 24000 mean around 30-35 minutes of defense so \ncount accordingly").grid(row=1,column=2)






lengthGame = Button(root, text="Amount of points to win", command=lengthGame)
lengthGame.grid(row=10,column=1)

def aiResearches():
    aiResearchWindow = Toplevel(root)
    aiResearchWindow.title("Change the speed of AI research")
    aiResearchWindow.geometry('400x350')

    aiProg= StringVar(value="normal")

    normalProgressvar = '{ResearchStages "0:1 1:2 2:3 3:4 4:5 5:6 6:7 7:8 8:9 9:10 10:11 11:12 12:13 13:14 14:15 15:16 16:17 17:18 18:19 19:20"}'
    slow30Progressvar = '{ResearchStages "0:1 1:1 2:2 3:2 4:3 5:4 6:5 7:6 8:7 9:8 10:9 11:10 12:11 13:12 14:13 15:14 16:15 17:16 18:17 19:18 20:19 21:20"}'
    slow60Progressvar = '{ResearchStages "0:1 1:1 2:2 3:2 4:2 5:3 6:3 7:4 8:4 9:5 10:5 11:6 12:7 13:8 14:9 15:9 16:10 17:11 18:12 19:13 20:14 21:15 22:16 23:17 24:18 25:19 25:20"}'
    fastProgressvar = '{ResearchStages "0:2 1:2 2:4 3:4 4:6 5:6 6:8 7:8 8:10 9:10 10:12 11:13 12:14 13:15 14:16 15:18 16:19 17:20"}'

    print(aiProg.get())
    if difficulty.get() == "performance":
        fileToRead = "./resource/set/dynamic_campaign/dcg_easy.inc"
        with open(fileToRead, "r") as lengthFile:
              wholeFile = lengthFile.read()
            # currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_easy.inc", 37)
          #   currentLength2 = r"BotResources +\d+"
         #    currentLength3 = str(re.search(currentLength2, wholeFile).group())
          #   currentLength4 = currentLength3.strip("[']")
              currentLength5 = wholeFile.replace(fastProgressvar, normalProgressvar)
              currentLength6 = currentLength5.replace(slow30Progressvar, normalProgressvar)
              currentLength7 = currentLength6.replace(slow60Progressvar, normalProgressvar)
              currentLength8 = currentLength7.replace(normalProgressvar, normalProgressvar)




    elif difficulty.get() == "hard":
        fileToRead = "./resource/set/dynamic_campaign/dcg_hard.inc"
        with open(fileToRead, "r") as lengthFile:
            wholeFile = lengthFile.read()
            currentLength5 = wholeFile.replace(fastProgressvar, normalProgressvar)
            currentLength6 = currentLength5.replace(slow30Progressvar, normalProgressvar)
            currentLength7 = currentLength6.replace(slow60Progressvar, normalProgressvar)
            currentLength8 = currentLength7.replace(normalProgressvar, normalProgressvar)

    elif difficulty.get() == "normal":
        fileToRead = "./resource/set/dynamic_campaign/dcg_normal.inc"
        with open(fileToRead, "r") as lengthFile:
            wholeFile = lengthFile.read()
            currentLength5 = wholeFile.replace(fastProgressvar, normalProgressvar)
            currentLength6 = currentLength5.replace(slow30Progressvar, normalProgressvar)
            currentLength7 = currentLength6.replace(slow60Progressvar, normalProgressvar)
            currentLength8 = currentLength7.replace(normalProgressvar, normalProgressvar)




    elif difficulty.get() == "unfair":
        fileToRead = "./resource/set/dynamic_campaign/dcg_heroic.inc"
        with open(fileToRead, "r") as lengthFile:
            wholeFile = lengthFile.read()

            currentLength5 = wholeFile.replace(fastProgressvar, normalProgressvar)
            currentLength6 = currentLength5.replace(slow30Progressvar, normalProgressvar)
            currentLength7 = currentLength6.replace(slow60Progressvar, normalProgressvar)
            currentLength8 = currentLength7.replace(normalProgressvar, normalProgressvar)

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





aiResearch = Button(root, text="AI research speed progression", command=aiResearches)
aiResearch.grid(row=11,column=1)

#NEED TO CHANGE RESUPPLY FILE ACCORDINGLY
def regenerateAmmos():
    regenerateAmmosWindow = Toplevel(root)

    regenerateAmmosWindow.title("Make trucks regenerate ammo")
    regenerateAmmosWindow.geometry('400x350')

    regenerateAmmosvar = StringVar(value="No regen")

    noRegenerateAmmos = Radiobutton(regenerateAmmosWindow, text="Trucks don't regenerate ammo", variable=regenerateAmmosvar, value="No regen")
    noRegenerateAmmos.grid(row=1, column=1)
    RegenerateAmmos = Radiobutton(regenerateAmmosWindow, text="Trucks regenerate ammo", variable=regenerateAmmosvar, value="Regen")
    RegenerateAmmos.grid(row=2, column=1)

    def savechanges():
         noRegen = "{regenerationPeriod 0};"
         yesRegen = "{regenerationPeriod 5};"
         if regenerateAmmosvar.get() == "No regen":
             with open("./resource/properties/resupply.inc", "r") as lengthFile:
                   wholeFile = lengthFile.read()
                   wholeFile = wholeFile.replace(yesRegen,noRegen)
                   print(yesRegen)

             with open("./resource/properties/resupply.inc", "w") as lengthFile:
                  lengthFile.write(wholeFile)
                  #print(wholeFile)

                  messagebox.showinfo("Saved")
                  regenerateAmmosWindow.destroy()
         elif regenerateAmmosvar.get() == "Regen":
              with open("./resource/properties/resupply.inc", "r") as lengthFile:
                   wholeFile = lengthFile.read()
                   wholeFile = wholeFile.replace(noRegen,yesRegen)
                   print(wholeFile)

              with open("./resource/properties/resupply.inc", "w") as lengthFile:
                   lengthFile.write(wholeFile)
                   print(wholeFile)

                   messagebox.showinfo("Saved")
                   regenerateAmmosWindow.destroy()


    saveButton = Button(regenerateAmmosWindow, text="Save changes", command=savechanges)
    saveButton.grid(row=3, column=2, padx=3)




regenerateAmmo = Button(root, text="Make supply trucks regenerate ammo", command=regenerateAmmos)
regenerateAmmo.grid(row=12,column=1)



#epoint = Entry(root, width=20)

#epoint.pack()
def typedifficulty():
    print(difficulty.get())

#global difficulty
#difficulty = StringVar(value="normal")
#performance =Radiobutton(root, text="performance(easy)", variable=difficulty,value="performance",command=typedifficulty).grid(row=5,column=2)
#normal = Radiobutton(root, text="normal", variable=difficulty,value="normal",command=typedifficulty).grid(row=2,column=2)
#hard = Radiobutton(root, text="hard", variable=difficulty,value="hard",command=typedifficulty).grid(row=3,column=2)
#unfair = Radiobutton(root, text="unfair", variable=difficulty,value="unfair",command=typedifficulty).grid(row=4,column=2)

#choosedifficulty =Label(root, text="Choose your difficulty before changing anything").grid(row=1,column=2)

#def typelength():
 #   print(campLength.get())
#campLength = StringVar(value="short")
#shortLength =Radiobutton(root, text="short", variable=campLength,value="short",command=typelength).grid(row=7,column=2)
#normalLength = Radiobutton(root, text="normal", variable=campLength,value="normal",command=typelength).grid(row=8,column=2)
#longLength = Radiobutton(root, text="long", variable=campLength,value="long",command=typelength).grid(row=9,column=2)
#vLongLength = Radiobutton(root, text="very long", variable=campLength,value="very long",command=typelength).grid(row=10,column=2)
#unlimited = Radiobutton(root, text="unlimited", variable=campLength,value="unlimited",command=typelength).grid(row=11,column=2)
#chooseLength =Label(root, text="Choose your campaign Length").grid(row=6,column=2)




#def checking ():
   # global difficulty
   # print(difficulty.get())
   # if difficulty == performance:
   #      with open("dcg_easy.inc") as file:
   #           contents = file.readlines(5)
   #           epoint.insert(0, contents)

   # elif difficulty == normal:
   #     with open("dcg_normal.inc") as file:
   #              contents = file.readlines(5)
   #              epoint.insert(0, contents)

#checkbtn = Button(root, text='check', command=checking).grid(row=5,column=1)

#print(difficulty)

#def settingChoose():


#button_setting = Button(root, text="<<", command=settingChoose)
#button_setting.pack()

def showhelp():
    helpWindow = Toplevel(root)
    textLabel = Label(helpWindow,text="This programme allows you to easily edit mod files. \n But the guide linked in the mod description \n is still the safest way to edit the game.\n If you have any questions about this programme please message me \n in discord linked in the description or in official GoH discord.").grid(row=1,column=1)




Button(root, text="help", command=showhelp).grid(row=15,column=2)
madeBy=Label(root, text="made by MrCookie for Conquest Enhanced mod.\n The code will be available on github if you want to do\n something like that for your mod.").grid (row=14,column=1)

root.mainloop()

