from player_army_size import *
from starting_player_resources import *
from war_period_logic import *
from labels_text import *
from ai_army_size import *

root = Tk()
root.title("Conquest Enhanced Configurator")
root.geometry("600x600")

# defined variables
difficulty = StringVar(value="normal")

selectDifficultyLabel = Label(root, text=selectDifficultyText)
selectDifficultyLabel.grid(row=1, column=3)

performanceRadiobutton = Radiobutton(root, text=performanceText, variable=difficulty, value="performance").grid(row=2,
                                                                                                                column=3)
normalRadiobutton = Radiobutton(root, text=normalText, variable=difficulty, value="normal").grid(row=3, column=3)
hardRadiobutton = Radiobutton(root, text=hardText, variable=difficulty, value="hard").grid(row=4, column=3)
unfairRadiobutton = Radiobutton(root, text=unfairText, variable=difficulty, value="unfair").grid(row=5, column=3)

spacer = Label(root, text=spacerSize32)
spacer.grid(row=1, column=2)

settingsToModifyLabel = Label(root, text=settingsToModify)
settingsToModifyLabel.grid(row=1, column=1)

# BUTTONS
periodButton = Button(root, text="War period", command=lambda: setWarPeriodModule(rootWindow=root))
periodButton.grid(row=2, column=1)

aiArmyButton = Button(root, text="AI army size",
                      command=lambda: setAiArmySizeModule(rootWindow=root, aiDifficulty=difficulty))
aiArmyButton.grid(row=3, column=1)
playerArmyButton = Button(root, text="Player army size",
                          command=lambda: setPlayerArmySizeModule(rootWindow=root, aiDifficulty=difficulty))
playerArmyButton.grid(row=4, column=1)

resourcesStartButton = Button(root, text="Starting Player Resources", command=lambda: setStartingPlayerResources(rootWindow=root, aiDifficulty=difficulty))
resourcesStartButton.grid(row=5,column=1)

root.mainloop()
