
class Auto:
    Reifen = 4
    farbe = None

    def __init__(self,Reifen,farbe):
        self.farbe = farbe
        self.Reifen = Reifen

    def fahren(self):
        print("Auto faehrt")

rotesAuto = Auto(4,"Blau")

print(rotesAuto.farbe)