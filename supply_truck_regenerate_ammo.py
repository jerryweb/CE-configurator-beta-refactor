from tkinter import *
from tkinter import messagebox
from tkinter.ttk import Button

#NEED TO CHANGE RESUPPLY FILE ACCORDINGLY
def regenerateAmmo(rootWindow):
    regenerateAmmosWindow = Toplevel(rootWindow)

    regenerateAmmosWindow.title("Make trucks regenerate ammo")
    regenerateAmmosWindow.geometry('400x350')

    regenerateAmmoVar = IntVar(value=0)

    def savechanges():
        noRegen = "{regenerationPeriod 0}"
        yesRegen = "{regenerationPeriod 5}"
        wholeFile = open("./resource/properties/resupply.inc", "r").read()

        if regenerateAmmoVar.get() == 1:
            wholeFile = wholeFile.replace(noRegen,yesRegen)
        else:
            wholeFile = wholeFile.replace(yesRegen, noRegen)

        newFile = open("./resource/properties/resupply.inc", "w")
        newFile.write(wholeFile)

        messagebox.showinfo("Saved", "Values Saved")
        regenerateAmmosWindow.destroy()

    regenerateSupplyTruckCheckButton = Checkbutton(regenerateAmmosWindow, text="Allow Supply Trucks to Regenerate Ammo",
                                                  variable=regenerateAmmoVar)
    regenerateSupplyTruckCheckButton.pack()

    saveButton = Button(regenerateAmmosWindow, text="Save Changes", command=savechanges)
    saveButton.pack()