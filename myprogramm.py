from tkinter import *
from tkinter import messagebox
from tkinter import ttk
import sys
import fileinput

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

    aiSizeWindow = Label(aiSizeWindow,text=f"Current AI army size multiplier is {currentLength5}").grid(row=1, column=2)

aiarmy = Button(root, text="AI army size", command=aiArmySize)
aiarmy.grid(row=2,column=1)

def playerArmySize():
    playerSizeWindow = Toplevel(root)

    playerSizeWindow.title("AI army size")
    playerSizeWindow.geometry('700x150')
    playerSizeCurrent = ""
    if difficulty.get() == "performance":
        fileToRead = "./resource/set/dynamic_campaign/dcg_easy.inc"
        with open(fileToRead, "r") as lengthFile:
            wholeFile = lengthFile.read()
            # currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_easy.inc", 37)
            currentLength2 = r"BotResources +\d+"
            currentLength3 = str(re.search(currentLength2, wholeFile).group())
            currentLength4 = currentLength3.strip("[']")
            currentLength5 = currentLength4.replace("BotResources", "").strip()

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

            playerSizeWindow.destroy()

    currentPoints = Entry(playerSizeWindow, textvariable=playerSizeCurrent, width=15)
    currentPoints.delete(0, END)
    currentPoints.insert(0, currentLength5)
    currentPoints.grid(row=2, column=2)

    saveButton = Button(playerSizeWindow, text="Save changes", command=savechanges)
    saveButton.grid(row=3, column=2, padx=3)

    playerLabel = Label(playerSizeWindow, text=f"Current AI army size multiplier is {currentLength5}").grid(row=1,
                                                                                                         column=2)


playerarmy = Button(root, text="Player army size", command=playerArmySize)
playerarmy.grid(row=3,column=1)

def preparationTime():
    preparationWindow = Toplevel(root)

    preparationWindow.title("Minimum time before AI comes")
    preparationWindow.geometry('300x250')

    preparationTimes = StringVar()

    preparationTimesspin = Spinbox(preparationWindow, from_=1.0, to=100.0, textvariable=preparationTimes).grid(row=1, column=1)

    preparationTimeslabel = Label(preparationWindow, text="Minimum time in seconds before AI comes").grid(row=1, column=2)
    return

preparation = Button(root, text="Minimum preparation time", command=preparationTime)
preparation.grid(row=4,column=1)

def resourceStarting():
    resourceStartingWindow = Toplevel(root)

    resourceStartingWindow.title("Enable or disable modded bullet damage")
    resourceStartingWindow.geometry('300x250')

    researchPoints = StringVar()
    manPowerPoints = StringVar()
    starCallPoints = StringVar()
    ammoPoints = StringVar()

    researchPointsspin = Spinbox(resourceStartingWindow, from_=1.0, to=100.0, textvariable=researchPoints).grid(row=1, column=1)
    manPowerPointspin = Spinbox(resourceStartingWindow, from_=1.0, to=100.0, textvariable=manPowerPoints).grid(row=2, column=1)
    starCallPointsspin = Spinbox(resourceStartingWindow, from_=1.0, to=100.0, textvariable=starCallPoints).grid(row=3, column=1)
    ammoPointsspin = Spinbox(resourceStartingWindow, from_=1.0, to=100.0, textvariable=ammoPoints).grid(row=4, column=1)


    researchPointslabel=Label(resourceStartingWindow, text="Starting research points").grid(row=1, column=2)
    manPowerPointlabel = Label(resourceStartingWindow, text="Starting manpower points").grid(row=2,column=2)
    starCallPointslabel = Label(resourceStartingWindow,text="Starting star points").grid(row=3, column=2)
    starCallPointslabel = Label(resourceStartingWindow, text="Starting ammo points").grid(row=4, column=2)
    return

resourcesStart = Button(root, text="Resources at start", command=resourceStarting)
resourcesStart.grid(row=5,column=1)

def resourceIncome():
    return

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
    thirdLevelspin = Spinbox(fortificationWindow, from_=1.0, to=100.0, textvariable=thirdLevel).grid(row=4, column=1)


   # firstLevellabel=Label(fortificationWindow, text="Amount of missions played for first defense level to be researched").grid(row=1, column=2)
    secondLevellabel = Label(fortificationWindow, text="Amount of missions played for second defense level to be researched").grid(row=2,
                                                                                                            column=2)
    thirdLevellabel = Label(fortificationWindow,text="Amount of missions played for third defense level to be researched").grid(row=4,
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


             currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_easy.inc", 28)
             currentLength22 = r"unlock games +\d+"
             currentLength33 = str(re.search(currentLength22, currentLength).group())
             currentLength44 = currentLength33.strip("[']")
             currentLength55 = currentLength44.replace("unlock games ", "").strip()
             thirdLevel.set(currentLength55)

             print(wholeFile)



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

            currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_hard.inc", 28)
            currentLength22 = r"unlock games +\d+"
            currentLength33 = str(re.search(currentLength22, currentLength).group())
            currentLength44 = currentLength33.strip("[']")
            currentLength55 = currentLength44.replace("unlock games ", "").strip()
            thirdLevel.set(currentLength55)

            print(wholeFile)

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

            currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_normal.inc", 28)
            currentLength22 = r"unlock games +\d+"
            currentLength33 = str(re.search(currentLength22, currentLength).group())
            currentLength44 = currentLength33.strip("[']")
            currentLength55 = currentLength44.replace("unlock games ", "").strip()
            thirdLevel.set(currentLength55)

            print(wholeFile)



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

            currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_heroic.inc", 28)
            currentLength22 = r"unlock games +\d+"
            currentLength33 = str(re.search(currentLength22, currentLength).group())
            currentLength44 = currentLength33.strip("[']")
            currentLength55 = currentLength44.replace("unlock games ", "").strip()
            thirdLevel.set(currentLength55)

            print(wholeFile)

    def savechanges():
         with open(fileToRead, "w") as lengthFile:

              newPoints2 = str(secondLevel.get())
              #newPoints3 = str(thirdLevel.get())
              lengthFile.write(wholeFile.replace(currentLength4, str(f"unlock games {newPoints2}")))
              messagebox.showinfo("Saved")

              fortificationWindow.destroy()


    def savechanges2():
         with open(fileToRead, "w") as lengthFile:
              newPoints3 = str(thirdLevel.get())
              lengthFile.write(wholeFile.replace(currentLength44, str(f"unlock games {newPoints3}")))
              messagebox.showinfo("Saved")

              fortificationWindow.destroy()


    #currentPoints = Entry(fortificationWindow, textvariable=aiSizeCurrent, width=15)
   # secondLevelspin.delete(0, END)
   # secondLevelspin.insert(0, currentLength5)
   # currentPoints.grid(row=2, column=2)

    saveButton = Button(fortificationWindow, text="Save changes for 2nd level", command=savechanges)
    saveButton.grid(row=3, column=1, padx=3)
    saveButton = Button(fortificationWindow, text="Save changes for 3rd level", command=savechanges2)
    saveButton.grid(row=5, column=1, padx=3)

    fortificationWindowlabel = Label(fortificationWindow,text=f"Change level 2 then click save. Then come back and change level 3. Restart the programm to check changes.").grid(row=1, column=2)


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

    tipLength = Label(lengthWindow,text="Current 24000 mean aroun 30-35 minutes of defense so \ncount accordingly").grid(row=1,column=2)






lengthGame = Button(root, text="Amount of points to win", command=lengthGame)
lengthGame.grid(row=10,column=1)

def aiResearches():
    aiResearchWindow = Toplevel(root)
    aiResearchWindow.title("Change the speed of AI research")
    aiResearchWindow.geometry('400x350')

    aiProg= StringVar(value="normal")

    normalProgressvar = "{ResearchStages \"0:1 1:2 2:3 3:4 4:5 5:6 6:7 7:8 8:9 9:10 10:11 11:12 12:13 13:14 14:15 15:16 16:17 17:18 18:19 19:20\"}"
    slow30Progressvar = "{ResearchStages \"0:1 1:1 2:2 3:2 4:3 5:4 6:5 7:6 8:7 9:8 10:9 11:10 12:11 13:12 14:13 15:14 16:15 17:16 18:17 19:18 20:19 21:20\"}"
    slow60Progressvar = "{ResearchStages \"0:1 1:1 2:2 3:2 4:2 5:3 6:3 7:4 8:4 9:5 10:5 11:6 12:7 13:8 14:9 15:9 16:10 17:11 18:12 19:13 20:14 21:15 22:16 23:17 24:18 25:19 25:20\"}"
    fastProgressvar = "{ResearchStages \"0:2 1:2 2:4 3:4 4:6 5:6 6:8 7:8 8:10 9:10 10:12 11:13 12:14 13:15 14:16 15:18 16:19 17:20\"}"

    print(aiProg.get())
    if difficulty.get() == "performance":
        fileToRead = "./resource/set/dynamic_campaign/dcg_easy.inc"
        with open(fileToRead, "r") as lengthFile:
              wholeFile = lengthFile.read()
            # currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_easy.inc", 37)
          #   currentLength2 = r"BotResources +\d+"
         #    currentLength3 = str(re.search(currentLength2, wholeFile).group())
          #   currentLength4 = currentLength3.strip("[']")
              currentLength5 = wholeFile.replace(normalProgressvar, slow60Progressvar)



    elif difficulty.get() == "hard":
        fileToRead = "./resource/set/dynamic_campaign/dcg_hard.inc"
        with open(fileToRead, "r") as lengthFile:
            wholeFile = lengthFile.read()
            # currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_easy.inc", 37)
          #  currentLength2 = r"BotResources +\d+"
          #  currentLength3 = str(re.search(currentLength2, wholeFile).group())
          #  currentLength4 = currentLength3.strip("[']")
           # currentLength5 = currentLength4.replace("BotResources", "").strip()

    elif difficulty.get() == "normal":
        fileToRead = "./resource/set/dynamic_campaign/dcg_normal.inc"
        with open(fileToRead, "r") as lengthFile:
            wholeFile = lengthFile.read()

            if aiProg.get() == "normal":
                wholeFile = wholeFile.replace(slow30Progressvar, normalProgressvar)
                wholeFile = wholeFile.replace(slow60Progressvar, normalProgressvar)
                wholeFile = wholeFile.replace(fastProgressvar, normalProgressvar)
                wholeFile = wholeFile.replace(normalProgressvar, normalProgressvar)





            elif aiProg.get() == "slow30":
                wholeFile.replace(slow30Progressvar, slow30Progressvar)
                wholeFile.replace(slow60Progressvar, slow30Progressvar)
                wholeFile.replace(fastProgressvar, slow30Progressvar)
                wholeFile.replace(normalProgressvar, slow30Progressvar)



            elif aiProg.get() == "slow60":
                wholeFile.replace(slow30Progressvar, slow60Progressvar)
                wholeFile.replace(slow60Progressvar, slow60Progressvar)
                wholeFile.replace(fastProgressvar, slow60Progressvar)
                wholeFile.replace(normalProgressvar, slow60Progressvar)



            elif aiProg.get() == "fast":
                wholeFile.replace(slow30Progressvar, fastProgressvar)
                wholeFile.replace(slow60Progressvar, fastProgressvar)
                wholeFile.replace(fastProgressvar, fastProgressvar)
                wholeFile.replace(normalProgressvar, fastProgressvar)



                # currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_easy.inc", 37)
          #  currentLength2 = r"BotResources +\d+"
          #  currentLength3 = str(re.search(currentLength2, wholeFile).group())
         #   currentLength4 = currentLength3.strip("[']")
          #  currentLength5 = currentLength4.replace("BotResources", "").strip()
                print(wholeFile)



    elif difficulty.get() == "unfair":
        fileToRead = "./resource/set/dynamic_campaign/dcg_heroic.inc"
        with open(fileToRead, "r") as lengthFile:
            wholeFile = lengthFile.read()


            # currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_easy.inc", 37)
          #  currentLength2 = r"BotResources +\d+"
          #  currentLength3 = str(re.search(currentLength2, wholeFile).group())
          #  currentLength4 = currentLength3.strip("[']")
          #  currentLength5 = currentLength4.replace("BotResources", "").strip()

    def savechanges():

        with open(fileToRead, "w") as lengthFile:
            lengthFile.write(wholeFile)
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
    messagebox.showinfo("Info about the programme","")
Button(root, text="help", command=showhelp).grid(row=15,column=2)

root.mainloop()

