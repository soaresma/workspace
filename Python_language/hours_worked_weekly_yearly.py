# This program calculate hours worked from a particular employee
# and calculate hours worked weekly and yearly.


DAYS_OF_WEEK = 5
DAYS_OF_YEARS = 252

def weekly_hours(hours_worked: float) -> float:
    """
    Calculate the hours worked weekly
    """
    return hours_worked * DAYS_OF_WEEK

def yearly_hours(hours_worked: float) -> float:
    """
    Calculate the hours worked yearly
    """
    return hours_worked * DAYS_OF_YEARS

def main():
    """
    Main function
    """
    hours_worked = float(input("Enter the hours worked: "))
    weekly = weekly_hours(hours_worked)
    yearly = yearly_hours(hours_worked)
    print(f"Hours worked weekly: {weekly}")
    print(f"Hours worked yearly: {yearly}")
    

if __name__ == "__main__":
    main()
    
