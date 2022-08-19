from tkinter import *
from tkinter import messagebox


def damages(rootWindow):
    damageWindow = Toplevel(rootWindow)

    damageWindow.title("Enable or Disable Modded Bullet Damage")
    damageWindow.geometry('300x250')
    damageWindow.focus_force()

    moddedDamageVar = IntVar(value=1)

    def savechanges():
        if moddedDamageVar.get() == 1:
            wholeFile = open("./configurator files/moddedballistics.set", "r").read()
        else:
            wholeFile = open("./configurator files/vanillaballistics.set", "r").read()

        lengthFile = open("./resource/set/ballistics.set", "w")
        lengthFile.write(wholeFile)
        lengthFile.close()
        messagebox.showinfo("Saved", "Values Saved")
        damageWindow.destroy()

    moddedDamageCheckButton = Checkbutton(damageWindow, text="Use modded damage values",
                                          variable=moddedDamageVar)
    moddedDamageCheckButton.pack()

    saveButton = Button(damageWindow, text="Save changes", command=savechanges)
    saveButton.pack()
