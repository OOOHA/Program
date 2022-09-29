import string, random, time, os


def clear():
    os.system("clear")

alp = list(string.ascii_letters + string.digits + string.punctuation + " ")
target, current = "Hello world",""
for c in target:
    letters = alp.copy()
    l = ""
    while l !=c:
        clear()
        l = random.choice(letters)
        letters.remove(l)
        print(current + l)
        time.sleep(0.03)
    current += l