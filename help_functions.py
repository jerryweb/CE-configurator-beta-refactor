def getDifficultyFileToRead(difficulty):
    fileToRead = "./resource/set/dynamic_campaign/dcg_normal.inc"

    if difficulty.get() == "performance":
        fileToRead = "./resource/set/dynamic_campaign/dcg_easy.inc"
    elif difficulty.get() == "hard":
        fileToRead = "./resource/set/dynamic_campaign/dcg_hard.inc"
    elif difficulty.get() == "unfair":
        fileToRead = "./resource/set/dynamic_campaign/dcg_heroic.inc"

    return str(fileToRead)