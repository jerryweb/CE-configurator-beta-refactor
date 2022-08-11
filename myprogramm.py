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

def aiArmySize():
    aiSizeWindow = Toplevel(root)

    aiSizeWindow.title("Change AI army size")
    aiSizeWindow.geometry('300x250')

    aiMultiplier = StringVar()


    aiMultiplierSpin = Spinbox(aiSizeWindow, from_=1.0, to=100.0, textvariable=aiMultiplier).grid(row=1, column=1)


    aiMulitplierLabel = Label(aiSizeWindow, text="Current multiplier for AI is 7").grid(row=1, column=2)
    return

aiarmy = Button(root, text="AI army size", command=aiArmySize)
aiarmy.grid(row=2,column=1)

def playerArmySize():
    playerSizeWindow = Toplevel(root)

    playerSizeWindow.title("Enable or disable modded bullet damage")
    playerSizeWindow.geometry('300x250')

    playerMultiplier = StringVar()

    playerMultiplierSpin = Spinbox(playerSizeWindow, from_=1.0, to=100.0, textvariable=playerMultiplier).grid(row=1, column=1)

    playerMulitplierLabel = Label(playerSizeWindow, text="Multiply army size by").grid(row=1, column=2)
    return


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

    fortificationWindow.title("Enable or disable modded bullet damage")
    fortificationWindow.geometry('300x250')

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
    return

aiFortification = Button(root, text="AI defense stage research speed", command=aiFortifications)
aiFortification.grid(row=7,column=1)

def damages():
    damageWindow = Toplevel(root)

    damageWindow.title("Enable or disable modded bullet damage")
    damageWindow.geometry('300x250')

    damageMode = StringVar(value="Mod damage")

    noResupply = Radiobutton(damageWindow, text="Mod damage", variable=damageMode,value="Mod damage").grid(row=1, column=1)
    yesResupply = Radiobutton(damageWindow, text="Vanilla damage", variable=damageMode,value="Vanilla damage").grid(row=2, column=1)
    return


damage = Button(root, text="Vanilla or mod damage settings", command=damages)
damage.grid(row=8,column=1)

def resupplies():
    resupplyWindow = Toplevel(root)

    resupplyWindow.title("Enable or disable resupplying enemy equipment")
    resupplyWindow.geometry('300x250')

    resupplyAm = StringVar(value="No resupplying")

    noResupply = Radiobutton(resupplyWindow, text="No resupplying enemy equipment", variable=resupplyAm, value="No resupplying").grid(row=1,column=1)
    yesResupply = Radiobutton(resupplyWindow, text="Resupplying enemy equipment allowed", variable=resupplyAm,value="Resupplying everything").grid(row=2, column=1)
    return


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

    with open("campaign_capture_the_flag.set", "r") as lengthFile:
        steee = lengthFile.readlines()[43]
        researchSpeed = steee
        print(researchSpeed)

    regenerateAmmoSpeed = Entry(aiResearchWindow, textvariable=researchSpeed).grid(row=2, column=2, padx=60)

    regenerateAmmoLabel = Label(aiResearchWindow, text="Choose the speed of AI researches").grid(row=1,column=2)
    return

aiResearch = Button(root, text="AI research speed progression", command=aiResearches)
aiResearch.grid(row=11,column=1)

def regenerateAmmos():
    regenerateAmmosWindow = Toplevel(root)

    regenerateAmmosWindow.title("Changing amount of points to win")
    regenerateAmmosWindow.geometry('400x350')

    with open("campaign_capture_the_flag.set", "r") as lengthFile:
        ste = lengthFile.readlines()[43]
        resupplySpeed = ste
        print(resupplySpeed)

    regenerateAmmoSpeed = Entry(regenerateAmmosWindow, textvariable=resupplySpeed).grid(row=2, column=2, padx=60)

    regenerateAmmoLabel = Label(regenerateAmmosWindow,
                      text="Choose how many resupplies per second should be regenerated").grid(row=1,
                                                                                                            column=2)
    return

regenerateAmmo = Button(root, text="Make supply trucks regenerate ammo", command=regenerateAmmos)
regenerateAmmo.grid(row=12,column=1)



#epoint = Entry(root, width=20)

#epoint.pack()

difficulty = StringVar(value="normal")
performance =Radiobutton(root, text="performance(easy)", variable=difficulty,value="performance").grid(row=5,column=6)
normal = Radiobutton(root, text="normal", variable=difficulty,value="normal").grid(row=2,column=6)
hard = Radiobutton(root, text="hard", variable=difficulty,value="hard").grid(row=3,column=6)
unfair = Radiobutton(root, text="unfair", variable=difficulty,value="unfair").grid(row=4,column=6)

choosedifficulty =Label(root, text="Choose your difficulty before changing anything").grid(row=1,column=5,columnspan=2)
#print(difficulty)

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

