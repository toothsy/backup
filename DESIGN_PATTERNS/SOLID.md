
# SOLID PRINCIPLES
- <img src="./pictures/DP3.png" alt="drawing" width=500/>
- supposed to use these to implement patterns
- prefer composition over inheritance,
	- composition ex- human class is composition of heart class and brain class.
- prefer interface approach as that helps you handle the dynamic business logic.

# Single responsibility
- <img src="./pictures/dp4.png" alt="drawing" width=500/>
- here automobile class has multiple responsibilities like washing itself changing tires.
- when in reality its responsibilities should only be start, stop and getOil others can be grouped into different modules
# Open/ Close PRINCIPLES
- <img src="./pictures/dp5.png" alt="drawing" width=500/>
- here interface modem is open for all to extend but closed to modify.
	- so adding a new modem becomes easy,as it just has to implement the interface.

# Liskov substition principle
- <img src="./pictures/dp6.png" alt="drawing" width=500/>
- using the vehicle super class I can make the same variable hold bike object and truck object.
- useful for saving space ig?? not sure.

# Interface segregation principle
- you should not force any functions onto implementatoin.
	- <img src="./pictures/dp7.png" alt="drawing" width=250/>
	- here it doesnt make sense to give the user all different ports when in reality they just need one.
	- the designer forced this onto the user which is bad.

	

