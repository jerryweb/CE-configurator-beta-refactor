from tkinter import *
from tkinter import messagebox
import linecache

def aiDefenseResearchSpeed(rootWindow,fileToRead):
    fortificationWindow = Toplevel(rootWindow)
    fortificationWindow.title("AI defense research speed")
    fortificationWindow.geometry('700x250')
    fortificationWindow.focus_force()


    #firstLevel = StringVar()
    secondLevel = StringVar()
    thirdLevel = StringVar()

    secondLevelspin = Spinbox(fortificationWindow, from_=1.0, to=100.0, textvariable=secondLevel).grid(row=2, column=1)
    thirdLevelspin = Spinbox(fortificationWindow, from_=1.0, to=100.0, textvariable=thirdLevel).grid(row=3, column=1)


    secondLevellabel = Label(fortificationWindow, text="Amount of missions played for second defense level to be researched").grid(row=2,
                                                                                                            column=2)
    thirdLevellabel = Label(fortificationWindow,text="Amount of missions played for third defense level to be researched").grid(row=3,
                                                                                                            column=2)

    # if difficulty.get() == "performance":
    #      fileToRead = "./resource/set/dynamic_campaign/dcg_easy.inc"
    #      with open(fileToRead, "r") as lengthFile:
    #          wholeFile = lengthFile.read()
    #          currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_easy.inc", 23)
    #          currentLength2 = r"unlock games +\d+"
    #          currentLength3 = str(re.search(currentLength2, currentLength).group())
    #          currentLength4 = currentLength3.strip("[']")
    #          currentLength5 = currentLength4.replace("unlock games ","").strip()
    #          secondLevel.set(currentLength5)
    #
    #          #print(wholeFile)
    #
    #
    #          currentLength1 = linecache.getline(r"./resource/set/dynamic_campaign/dcg_easy.inc", 28)
    #          currentLength22 = r"unlock games +\d+"
    #          currentLength33 = str(re.search(currentLength22, currentLength1).group())
    #          currentLength44 = currentLength33.strip("[']")
    #          currentLength55 = currentLength44.replace("unlock games ", "").strip()
    #          thirdLevel.set(currentLength55)
    #
    #
    #
    #
    #
    # elif difficulty.get() == "hard":
    #     fileToRead = "./resource/set/dynamic_campaign/dcg_hard.inc"
    #     with open(fileToRead, "r") as lengthFile:
    #         wholeFile = lengthFile.read()
    #         currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_hard.inc", 23)
    #         currentLength2 = r"unlock games +\d+"
    #         currentLength3 = str(re.search(currentLength2, currentLength).group())
    #         currentLength4 = currentLength3.strip("[']")
    #         currentLength5 = currentLength4.replace("unlock games ", "").strip()
    #         secondLevel.set(currentLength5)
    #
    #         # print(wholeFile)
    #
    #         currentLength1 = linecache.getline(r"./resource/set/dynamic_campaign/dcg_hard.inc", 28)
    #         currentLength22 = r"unlock games +\d+"
    #         currentLength33 = str(re.search(currentLength22, currentLength1).group())
    #         currentLength44 = currentLength33.strip("[']")
    #         currentLength55 = currentLength44.replace("unlock games ", "").strip()
    #         thirdLevel.set(currentLength55)
    #
    #
    #
    # elif difficulty.get() == "normal":
    #     fileToRead = "./resource/set/dynamic_campaign/dcg_normal.inc"
    #     with open(fileToRead, "r") as lengthFile:
    #         wholeFile = lengthFile.read()
    #         currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_normal.inc", 23)
    #         currentLength2 = r"unlock games +\d+"
    #         currentLength3 = str(re.search(currentLength2, currentLength).group())
    #         currentLength4 = currentLength3.strip("[']")
    #         currentLength5 = currentLength4.replace("unlock games ", "").strip()
    #         secondLevel.set(currentLength5)
    #
    #         # print(wholeFile)
    #
    #         currentLength1 = linecache.getline(r"./resource/set/dynamic_campaign/dcg_normal.inc", 28)
    #         currentLength22 = r"unlock games +\d+"
    #         currentLength33 = str(re.search(currentLength22, currentLength1).group())
    #         currentLength44 = currentLength33.strip("[']")
    #         currentLength55 = currentLength44.replace("unlock games ", "").strip()
    #         thirdLevel.set(currentLength55)
    #
    #
    #
    #
    #
    # elif difficulty.get() == "unfair":
    #     fileToRead = "./resource/set/dynamic_campaign/dcg_heroic.inc"
    #     with open(fileToRead, "r") as lengthFile:
    #         wholeFile = lengthFile.read()
    #         currentLength = linecache.getline(r"./resource/set/dynamic_campaign/dcg_heroic.inc", 23)
    #         currentLength2 = r"unlock games +\d+"
    #         currentLength3 = str(re.search(currentLength2, currentLength).group())
    #         currentLength4 = currentLength3.strip("[']")
    #         currentLength5 = currentLength4.replace("unlock games ", "").strip()
    #         secondLevel.set(currentLength5)
    #
    #         # print(wholeFile)
    #
    #         currentLength1 = linecache.getline(r"./resource/set/dynamic_campaign/dcg_heroic.inc", 28)
    #         currentLength22 = r"unlock games +\d+"
    #         currentLength33 = str(re.search(currentLength22, currentLength1).group())
    #         currentLength44 = currentLength33.strip("[']")
    #         currentLength55 = currentLength44.replace("unlock games ", "").strip()
    #         thirdLevel.set(currentLength55)

    # fileToRead = "./resource/set/dynamic_campaign/dcg_easy.inc"
    # with open(fileToRead, "r") as lengthFile:
    # lengthFile = open(fileToRead, "r")
    wholeFile = open(fileToRead, "r").read()
    currentLength = linecache.getline(r"" + fileToRead, 23)
    currentLengthFormat = r"unlock games +\d+"
    currentLength = str(re.search(currentLengthFormat, currentLength).group())
    currentLength = currentLength.strip()
    currentLength5 = currentLength.strip("unlock games")
    secondLevel.set(currentLength5)

    # print(wholeFile)

    currentLength1 = linecache.getline(r"./resource/set/dynamic_campaign/dcg_easy.inc", 28)
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

