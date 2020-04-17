class Lebewesen:
    augen = 3
    def __init__(self):
        self.art = "Saeuger"

class hund(Lebewesen):
    Beine = 4
    def changeAugen(self,augen):
         self.augen = augen

H = hund()
H.changeAugen(4)

print(H.art)