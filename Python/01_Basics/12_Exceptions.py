
def fun():
    raise RuntimeError

try:
    fun()
except RuntimeError:
    print("Runtime Errror Achtung")
else:
    print("nichts passiert")

print("weiter gehts")