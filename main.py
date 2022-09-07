from campaign_resource_income import *
from game_length import *
from player_army_size import *
from resupply_enemy_equipment import *
from starting_player_resources import *
from supply_truck_regenerate_ammo import *
from vanilla_or_mod_damage import *
from war_period_logic import *
from labels_text import *
from ai_army_size import *
from ai_research_speed import *
from ai_defense_research_speed import *
from ai_reinforcement_time import *

root = Tk()
root.title("Conquest Enhanced Configurator")
root.geometry("800x600")

# defined variables
difficulty = StringVar(value="normal")
fileToRead = getDifficultyFileToRead(difficulty=difficulty)
economySectionRow = 1

selectDifficultyLabel = Label(root, text=selectDifficultyText)
selectDifficultyLabel.grid(row=1, column=3)


# Get the file to read based on which difficulty is selected
def getDifficultyFile():
   j = getDifficultyFileToRead(difficulty=difficulty)



performanceRadiobutton = Radiobutton(root, text=performanceText, variable=difficulty, value="performance")
performanceRadiobutton.grid(row=2, column=3)

normalRadiobutton = Radiobutton(root, text=normalText, variable=difficulty, value="normal").grid(row=3, column=3)
hardRadiobutton = Radiobutton(root, text=hardText, variable=difficulty, value="hard").grid(
    row=4, column=3)
unfairRadiobutton = Radiobutton(root, text=unfairText, variable=difficulty, value="unfair").grid(row=5, column=3)

spacer = Label(root, text=spacerSize32)
spacer.grid(row=1, column=2)

economyLabel = Label(root, text=economyText)
economyLabel.grid(row=economySectionRow, column=1)
economySectionRow += 1

# BUTTONS

aiArmyButton = Button(root, text="AI army size",
                      command=lambda: setAiArmySizeModule(rootWindow=root, fileToRead=getDifficultyFileToRead(
                                                                             difficulty=difficulty)))
aiArmyButton.grid(row=economySectionRow, column=1)
economySectionRow += 1

playerArmyButton = Button(root, text="Player army size",
                          command=lambda: setPlayerArmySizeModule(rootWindow=root, fileToRead=getDifficultyFileToRead(
                                                                             difficulty=difficulty)))
playerArmyButton.grid(row=economySectionRow, column=1)
economySectionRow += 1

resourcesStartButton = Button(root, text="Starting Player Resources",
                              command=lambda: setStartingPlayerResources(rootWindow=root,
                                                                         fileToRead=getDifficultyFileToRead(
                                                                             difficulty=difficulty)))
resourcesStartButton.grid(row=economySectionRow, column=1)
economySectionRow += 1

resourcesButton = Button(root, text="Resource Income",
                         command=lambda: resourceIncome(rootWindow=root,
                                                        fileToRead=getDifficultyFileToRead(difficulty=difficulty)))
resourcesButton.grid(row=economySectionRow, column=1)
economySectionRow += 1

spacer = Label(root, text=spacerSize32)
spacer.grid(row=economySectionRow, column=1)
economySectionRow += 1

gameMechanicsRow = economySectionRow

gameMechanicsLabel = Label(root, text=gameMechanicsText)
gameMechanicsLabel.grid(row=gameMechanicsRow, column=1)
gameMechanicsRow += 1

periodButton = Button(root, text="War period", command=lambda: setWarPeriodModule(rootWindow=root))
periodButton.grid(row=gameMechanicsRow, column=1)
gameMechanicsRow += 1

resupply = Button(root, text="Toggle resupplying enemy equipment", command=lambda: resupplies(rootWindow=root))
resupply.grid(row=gameMechanicsRow, column=1)
gameMechanicsRow += 1

regenerateAmmoButton = Button(root, text="Make supply trucks regenerate ammo",
                              command=lambda: regenerateAmmo(rootWindow=root))
regenerateAmmoButton.grid(row=gameMechanicsRow, column=1)
gameMechanicsRow += 1

gameLengthButton = Button(root, text="Victory Points Required to Win", command=lambda: gameLength(rootWindow=root))
gameLengthButton.grid(row=gameMechanicsRow, column=1)
gameMechanicsRow += 1

damage = Button(root, text="Vanilla or Mod Damage Settings", command=lambda: damages(rootWindow=root))
damage.grid(row=gameMechanicsRow, column=1)
gameMechanicsRow += 1

spacer = Label(root, text=spacerSize32)
spacer.grid(row=gameMechanicsRow, column=1)
gameMechanicsRow += 1

aiLogicRow = gameMechanicsRow

gameMechanicsLabel = Label(root, text=aiLogicText)
gameMechanicsLabel.grid(row=aiLogicRow, column=1)
aiLogicRow += 1

aiResearchButton = Button(root, text="AI Research Speed Progression", command=lambda: aiResearches(rootWindow=root,
                                                                                                   fileToRead=getDifficultyFileToRead(
                                                                                                       difficulty=difficulty)))
aiResearchButton.grid(row=aiLogicRow, column=1)
aiLogicRow += 1

aiDefenseResearchSpeedButton = Button(root, text="AI defense stage research speed",
                                      command=lambda: aiDefenseResearchSpeed(rootWindow=root,
                                                                             fileToRead=getDifficultyFileToRead(
                                                                                 difficulty=difficulty)))
aiDefenseResearchSpeedButton.grid(row=aiLogicRow, column=1)
aiLogicRow += 1

aiReinforcementTimeButton = Button(root, text="Defense Preparation Time (AI reinforcement Time)",
                                   command=lambda: preparationTime(rootWindow=root))
aiReinforcementTimeButton.grid(row=aiLogicRow, column=1)
aiLogicRow += 1


def showhelp():
    helpWindow = Toplevel(root)
    textLabel = Label(helpWindow,
                      text="This programme allows you to easily edit mod files. \n But the guide linked in the mod description \n is still the safest way to edit the game.\n If you have any questions about this programme please message me \n in discord linked in the description or in official GoH discord.").grid(
        row=5, column=2)


Button(root, text="help", command=showhelp).grid(row=10, column=3)
madeByLabel = Label(root,
                    text="Made by MrCookie/ refactored by Hawka for Conquest Enhanced mod.\n The code will be available on github if you want to do\n use it for your mod.").grid(
    row=11, column=3)

root.mainloop()
