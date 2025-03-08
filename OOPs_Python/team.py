class Player:
    

class Team:
    def Games(self):
        print("\nFor which sport you want to get enrolled ?")
        print("1. Cricket")
        print("2. Football")
        print("3. Badminton")
        print("4. Tennis")
        print("5. Squash")
        print("6. Chess")
        print("7. Exit")
        self.choice = int(input("Enter your choice from above: "))
        self.sport = None
        sport = {
            1: "Dermatologist",
            2: "Gynecologist",
            3: "Psychiatrist",
            4: "General Physician",
            5: "Neurologist",
            6: "Pediatrics",
            7: "Orthopedics",
            8: "Oncologist",
            9: "Cardiologist",
            10: "Dentist"
        }