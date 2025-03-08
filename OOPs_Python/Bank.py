class Bank:
    def __init__(self, code, pin, balance):
        self.code = code
        self.pin = pin
        self.balance = balance
        self.attempts = 3

    def __Debit(self, amount):
        if amount > self.balance:
            print("Insufficient Balance")
        else:
            self.balance -= amount
            print(f"{amount} debited from your account..!!")

    def __Credit(self, amount):
        self.balance += amount
        print(f"{amount} credited to your account successfully..!!")

    def Display(self):
        print(f"Current balance in your account is Rs. {self.balance}")

    def Login(self):
        for attempt in range(self.attempts):
            entered_pin = input("Enter the pin: ")
            if entered_pin == self.pin:
                print("Pin matched...Access granted")
                return True
            else:
                print("Incorrect pin")
                remaining_attempts = self.attempts - attempt - 1
                if remaining_attempts > 0:
                    print(f"Try Again. {remaining_attempts} attempts left")
                else:
                    print("Too many incorrect attempts. Exiting system.")
                    return False
        return False

    def Menu(self):
        while True:
            print("\nChoose an option:")
            print("Press 'C' for Credit")
            print("Press 'D' for Debit")
            print("Press 'B' for Balance Check")
            print("Press 'R' to Restart Login Process")
            print("Press 'E' to Exit the System")
            choice = input("Enter your choice: ").upper()

            if choice == 'C':
                amount = float(input("Enter the amount to be credited: "))
                self.__Credit(amount)

            elif choice == 'D':
                amount = float(input("Enter the amount to be debited: "))
                self.__Debit(amount)

            elif choice == 'B':
                self.Display()

            elif choice == 'R':
                print("Restarting the process...")
                if not self.Login():
                    break

            elif choice == 'E':
                print("Exiting the process. Thank you!")
                break

            else:
                print("Invalid option selected. Please try again!")

def main():
    atm_code = "12345"
    atm_pin = "54321"
    atm_balance = 100000
    atm = Bank(atm_code, atm_pin, atm_balance)

    if atm.Login():
        atm.Menu()

if __name__ == "__main__":
    main()

