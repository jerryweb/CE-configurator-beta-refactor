from tkinter import messagebox
from tkinter.ttk import Button
from tkinter import *

def setWarPeriodModule(rootWindow):

    campaignPeriod = Toplevel(rootWindow)
    campaignPeriod.title("Choose war period for your conquest")
    campaignPeriod.geometry('400x350')
    messagebox.showinfo("Warning",
                        "Experimental feature! When you set the war period the difficulty files will  be reset!!! So if you changed anything before that, you'll have to do it again. If you don't want to change anything just press 'Cancel'.")
    campaignPeriod.focus_force()

    def setWarPeriod(period):
        with open("./configurator files/" + period + "/roster/units_fin.set", "r") as lengthFile:
            finUnits = lengthFile.read()

        with open("./resource/set/multiplayer/units/conquest/units_fin.set", "w") as lengthFile:
            lengthFile.write(finUnits)

        with open("./configurator files/" + period + "/roster/units_fin2.set", "r") as lengthFile:
            finnUnits = lengthFile.read()

        with open("./resource/set/multiplayer/units/conquest/units_fin2.set", "w") as lengthFile:
            lengthFile.write(finnUnits)

        with open("./configurator files/" + period + "/roster/units_ger.set", "r") as lengthFile:
            gerUnits = lengthFile.read()

        with open("./resource/set/multiplayer/units/conquest/units_ger.set", "w") as lengthFile:
            lengthFile.write(gerUnits)

        with open("./configurator files/" + period + "/roster/units_ger2.set", "r") as lengthFile:
            gerrUnits = lengthFile.read()

        with open("./resource/set/multiplayer/units/conquest/units_ger2.set", "w") as lengthFile:
            lengthFile.write(gerrUnits)

        with open("./configurator files/" + period + "/roster/units_rus.set", "r") as lengthFile:
            sovUnits = lengthFile.read()

        with open("./resource/set/multiplayer/units/conquest/units_rus.set", "w") as lengthFile:
            lengthFile.write(sovUnits)

        with open("./configurator files/" + period + "/roster/units_rus2.set", "r") as lengthFile:
            russUnits = lengthFile.read()

        with open("./resource/set/multiplayer/units/conquest/units_rus2.set", "w") as lengthFile:
            lengthFile.write(russUnits)

        with open("./configurator files/" + period + "/conquest_configuration/bot.wave_system.lua", "r") as lengthFile:
            botWave = lengthFile.read()

        with open("./resource/script/multiplayer/bot.wave_system.lua", "w") as lengthFile:
            lengthFile.write(botWave)

        with open("./configurator files/" + period + "/conquest_configuration/bot.lua", "r") as lengthFile:
            botLogic = lengthFile.read()

        with open("./resource/script/multiplayer/bot.lua", "w") as lengthFile:
            lengthFile.write(botLogic)

        with open("./configurator files/" + period + "/dynamic_campaign/dcg_easy.inc", "r") as lengthFile:
            easyD = lengthFile.read()

        with open("./resource/set/dynamic_campaign/dcg_easy.inc", "w") as lengthFile:
            lengthFile.write(easyD)

        with open("./configurator files/" + period + "/dynamic_campaign/dcg_normal.inc", "r") as lengthFile:
            normalD = lengthFile.read()

        with open("./resource/set/dynamic_campaign/dcg_normal.inc", "w") as lengthFile:
            lengthFile.write(normalD)

        with open("./configurator files/" + period + "/dynamic_campaign/dcg_hard.inc", "r") as lengthFile:
            hardD = lengthFile.read()

        with open("./resource/set/dynamic_campaign/dcg_hard.inc", "w") as lengthFile:
            lengthFile.write(hardD)
        with open("./configurator files/" + period + "/dynamic_campaign/dcg_heroic.inc", "r") as lengthFile:
            heroD = lengthFile.read()

        with open("./resource/set/dynamic_campaign/dcg_heroic.inc", "w") as lengthFile:
            lengthFile.write(heroD)

        with open("./configurator files/" + period + "/dynamic_campaign/unit_research_fin.set", "r") as lengthFile:
            finRes = lengthFile.read()

        with open("./resource/set/dynamic_campaign/unit_research_fin.set", "w") as lengthFile:
            lengthFile.write(finRes)

        with open("./configurator files/" + period + "/dynamic_campaign/unit_research_fin2.set", "r") as lengthFile:
            finRes2 = lengthFile.read()

        with open("./resource/set/dynamic_campaign/unit_research_fin2.set", "w") as lengthFile:
            lengthFile.write(finRes2)

        with open("./configurator files/" + period + "/dynamic_campaign/unit_research_ger.set", "r") as lengthFile:
            gerRes = lengthFile.read()

        with open("./resource/set/dynamic_campaign/unit_research_ger.set", "w") as lengthFile:
            lengthFile.write(gerRes)

        with open("./configurator files/" + period + "/dynamic_campaign/unit_research_ger2.set", "r") as lengthFile:
            gerRes2 = lengthFile.read()

        with open("./resource/set/dynamic_campaign/unit_research_ger2.set", "w") as lengthFile:
            lengthFile.write(gerRes2)
        with open("./configurator files/" + period + "/dynamic_campaign/unit_research_rus.set", "r") as lengthFile:
            rusRes = lengthFile.read()

        with open("./resource/set/dynamic_campaign/unit_research_rus.set", "w") as lengthFile:
            lengthFile.write(rusRes)

        with open("./configurator files/" + period + "/dynamic_campaign/unit_research_rus2.set", "r") as lengthFile:
            rusRes2 = lengthFile.read()

        with open("./resource/set/dynamic_campaign/unit_research_rus.set", "w") as lengthFile:
            lengthFile.write(rusRes2)

        messagebox.showinfo("Saved")
        campaignPeriod.destroy()

    def cancel():
        campaignPeriod.destroy()

    normalPeriodButton = Button(campaignPeriod, text="Full War 1939-1945", command=lambda: setWarPeriod(period='normal'))
    # grid(row=2,column=3)
    normalPeriodButton.pack()

    earlyPeriodButton = Button(campaignPeriod,text="Early War 1939-1941",command=lambda: setWarPeriod(period='earlywar'))
        # .grid(row=3,column=3)
    earlyPeriodButton.pack()

    midPeriodButton = Button(campaignPeriod,text="Mid War 1941-1943",command=lambda: setWarPeriod(period='midwar'))
        # .grid(row=4,column=3)
    midPeriodButton.pack()

    latePeriodButton = Button(campaignPeriod,text="Late War 1943-1945",command=lambda: setWarPeriod(period='latewar'))
        # .grid(row=5,column=3)
    latePeriodButton.pack()


    cancelButton = Button(campaignPeriod, text="Cancel", command=cancel, fg="red")
        # .grid(row=6, column=3)
    cancelButton.pack()


