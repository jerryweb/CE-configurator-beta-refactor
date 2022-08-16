from war_period_logic import *
from labels_text import *
from ai_army_size import *

root = Tk()
root.title("Conquest Enhanced Configurator")
root.geometry("600x600")

# defined variables
difficulty = StringVar(value="normal")

selectDifficultyLabel = Label(root, text=selectDifficultyText)
# selectDifficultyLabel.pack()
selectDifficultyLabel.grid(row=1, column=3)

performanceRadiobutton = Radiobutton(root, text=performanceText, variable=difficulty, value="performance").grid(row=2,
                                                                                                                column=3)
# performanceRadiobutton.pack()
normalRadiobutton = Radiobutton(root, text=normalText, variable=difficulty, value="normal").grid(row=3, column=3)
# normalRadiobutton.pack()
hardRadiobutton = Radiobutton(root, text=hardText, variable=difficulty, value="hard").grid(row=4, column=3)
# hardRadiobutton.pack()
unfairRadiobutton = Radiobutton(root, text=unfairText, variable=difficulty, value="unfair").grid(row=5, column=3)
# unfairRadiobutton.pack()

spacer = Label(root, text=spacerSize32)
spacer.grid(row=1, column=2)


settingsToModifyLabel = Label(root, text=settingsToModify)
settingsToModifyLabel.grid(row=1, column=1)
# War Period Section
# modifyWarPeriodLabel = Label(root, text=warPeriodText)
# modifyWarPeriodLabel.grid(row=1, column=3)
def setPeriod():
    setWarPeriodModule(rootWindow=root)


periodButton = Button(root, text="War period", command=setPeriod).grid(row=2, column=1)


# periodButton.pack()

def setAIArmySize():
    setAiArmySizeModule(rootWindow=root, aiDifficulty=difficulty)

aiArmyButton = Button(root, text="AI army size", command=setAIArmySize)
aiArmyButton.grid(row=3, column=1)

root.mainloop()
