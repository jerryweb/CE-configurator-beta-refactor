from tkinter import *
from tkinter import messagebox
from tkinter.ttk import Button

def resupplies(rootWindow):
    resupplyWindow = Toplevel(rootWindow)
    resupplyWindow.title("Enable or Disable Resupplying Enemy Equipment")
    resupplyWindow.geometry('300x250')

    resupplyAllVar = IntVar(value=0)

    def savechanges():
        wholeFile = open("./resource/properties/resupply.inc", "r").read()
        if resupplyAllVar.get() == 1:
            gerDefault = str(
                '("items_light_generic")	("items_light_ger")	("items_heavy_ger")	("items_light_fin")	("items_heavy_fin") ("items_heavy_generic")')
            sovDefault = str(
                '("items_light_generic")	("items_light_rus")	("items_light_eng")	("items_light_usa")	("items_heavy_rus")	("items_heavy_eng")	("items_heavy_generic")')
            gerNew = str(
                '("items_light_generic")	("items_light_ger")	("items_heavy_ger")	("items_light_fin")	("items_heavy_fin") ("items_heavy_generic")("items_light_rus")	("items_light_eng")	("items_light_usa")	("items_heavy_rus")	("items_heavy_eng")')
            sovNew = str(
                '("items_light_generic")	("items_light_rus")	("items_light_eng")	("items_light_usa")	("items_heavy_rus")	("items_heavy_eng")	("items_heavy_generic")("items_light_ger")	("items_heavy_ger")	("items_light_fin")	("items_heavy_fin")')

            wholeFile = wholeFile.replace(str(gerDefault), str(gerNew))
            wholeFile = wholeFile.replace(str(sovDefault), str(sovNew))
        else:
            gerDefault = str(
                '("items_light_generic")	("items_light_ger")	("items_heavy_ger")	("items_light_fin")	("items_heavy_fin") ("items_heavy_generic")')
            sovDefault = str(
                '("items_light_generic")	("items_light_rus")	("items_light_eng")	("items_light_usa")	("items_heavy_rus")	("items_heavy_eng")	("items_heavy_generic")')
            gerNew = str(
                '("items_light_generic")	("items_light_ger")	("items_heavy_ger")	("items_light_fin")	("items_heavy_fin") ("items_heavy_generic")("items_light_rus")	("items_light_eng")	("items_light_usa")	("items_heavy_rus")	("items_heavy_eng")')
            sovNew = str(
                '("items_light_generic")	("items_light_rus")	("items_light_eng")	("items_light_usa")	("items_heavy_rus")	("items_heavy_eng")	("items_heavy_generic")("items_light_ger")	("items_heavy_ger")	("items_light_fin")	("items_heavy_fin")')

            wholeFile = wholeFile.replace(str(gerNew), str(gerDefault))
            wholeFile = wholeFile.replace(str(sovNew), str(sovDefault))

        lengthFile = open("./resource/properties/resupply.inc", "w")
        lengthFile.write(wholeFile)
        messagebox.showinfo("Saved", "Values Saved")
        resupplyWindow.destroy()

    resupplyAllEquipmentCheckButton = Checkbutton(resupplyWindow, text="Resupplying enemy equipment allowed",
                                                  variable=resupplyAllVar)
    resupplyAllEquipmentCheckButton.pack()

    saveButton = Button(resupplyWindow, text="Save changes", command=savechanges)
    saveButton.pack()
