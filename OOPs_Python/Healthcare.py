class Patient:
    def Details(self):
        self.name = input("Enter patient's name: ")
        self.age = int(input("Enter patient's age: "))
        self.mobile = int(input("Enter mobile number: "))
        self.address = input("Enter your address: ")

    def Problem(self):
        print("\nWhich specialist do you want to consult?")
        print("1. Dermatologist")
        print("2. Gynecologist")
        print("3. Psychiatrist")
        print("4. General Physician")
        print("5. Neurologist")
        print("6. Pediatrics")
        print("7. Orthopedics")
        print("8. Oncologist")
        print("9. Cardiologist")
        print("10. Dentist")
        print("11. Exit")
        self.choice = int(input("Enter your choice from above: "))
        self.specialist = None
        specialists = {
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

        if self.choice in specialists:
            self.specialist = specialists[self.choice]
        elif self.choice == 11:
            print("Exiting the system.")
        else:
            print("Invalid choice! Please try again.")


class Doctor(Patient):
    def get_doctors(self):
        doctors = {
            "Dermatologist": ["Dr. Allen", "Dr. Karen"],
            "Gynecologist": ["Dr. Julia", "Dr. Maria"],
            "Psychiatrist": ["Dr. Tom", "Dr. Lisa"],
            "General Physician": ["Dr. John", "Dr. Emma"],
            "Neurologist": ["Dr. Nathan", "Dr. Sarah"],
            "Pediatrics": ["Dr. Lucy", "Dr. Sam"],
            "Orthopedics": ["Dr. Peter", "Dr. Simon"],
            "Oncologist": ["Dr. Blake", "Dr. Rachel"],
            "Cardiologist": ["Dr. Smith", "Dr. Kate"],
            "Dentist": ["Dr. Tina", "Dr. Robert"]
        }
        if self.specialist:
            return doctors.get(self.specialist, [])
        else:
            return []


class Appointment:
    schedule = {
        "Dr. Allen": ["Monday 10:00 AM", "Wednesday 2:00 PM"],
        "Dr. Karen": ["Tuesday 11:00 AM", "Thursday 3:00 PM"],
        "Dr. Julia": ["Monday 9:00 AM", "Thursday 1:00 PM"],
        "Dr. Maria": ["Wednesday 10:30 AM", "Friday 4:00 PM"],
        "Dr. Tom": ["Monday 12:00 PM", "Friday 5:00 PM"],
        "Dr. Lisa": ["Tuesday 2:00 PM", "Saturday 6:00 PM"],
        "Dr. John": ["Monday 8:00 AM", "Wednesday 12:00 PM"],
        "Dr. Emma": ["Tuesday 9:30 AM", "Thursday 11:30 AM"],
        "Dr. Nathan": ["Monday 10:00 AM", "Wednesday 3:00 PM"],
        "Dr. Sarah": ["Tuesday 1:00 PM", "Thursday 2:00 PM"],
        "Dr. Lucy": ["Monday 2:00 PM", "Friday 1:00 PM"],
        "Dr. Sam": ["Tuesday 10:00 AM", "Saturday 9:00 AM"],
        "Dr. Peter": ["Monday 11:00 AM", "Thursday 4:00 PM"],
        "Dr. Simon": ["Wednesday 9:00 AM", "Friday 11:00 AM"],
        "Dr. Blake": ["Tuesday 10:30 AM", "Thursday 3:30 PM"],
        "Dr. Rachel": ["Wednesday 12:00 PM", "Saturday 2:00 PM"],
        "Dr. Smith": ["Monday 10:00 AM", "Wednesday 2:00 PM"],
        "Dr. Kate": ["Thursday 1:00 PM", "Saturday 3:00 PM"],
        "Dr. Tina": ["Monday 9:00 AM", "Friday 11:00 AM"],
        "Dr. Robert": ["Tuesday 2:00 PM", "Saturday 4:00 PM"]
    }

    def __init__(self, doctor_name):
        self.doctor_name = doctor_name

    def confirm_appointment(self):
        times = Appointment.schedule.get(self.doctor_name, [])
        if times:
            print(f"\nAvailable times for {self.doctor_name}:")
            for i, time in enumerate(times, 1):
                print(f"{i}. {time}")
            choice = int(input("Select a time slot (enter the number): "))
            if 1 <= choice <= len(times):
                print(f"Appointment confirmed with {self.doctor_name} on {times[choice - 1]}.")
            else:
                print("Invalid time slot choice.")
        else:
            print("No available times for the selected doctor.")


def main():
    
    patient = Doctor()
    patient.Details()
    patient.Problem()

    
    if patient.specialist:
        doctors = patient.get_doctors()
        if doctors:
            print(f"\nAvailable {patient.specialist} doctors: {', '.join(doctors)}")
            doctor_choice = input(f"Select a doctor from the above list: ")
            if doctor_choice in doctors:
                appointment = Appointment(doctor_choice)
                appointment.confirm_appointment()
            else:
                print("Invalid doctor choice.")
        else:
            print(f"No doctors available for the selected specialization: {patient.specialist}")
    else:
        print("No specialist selected or exiting.")


if __name__ == "__main__":
    main()
