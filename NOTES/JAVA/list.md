
# List interface
- ## ArrayList implementation

	- ### set(int index,int val)
		- #### $O(1)$
		- #### goes to that index and updates the value as val.
	- ### remove(int index)
		- #### $O(n)$
		- #### removes index'th element duh.
	- ### remove(Object i)
		- #### $O(n)$
		- ### removes first occurence of i.
	- ### clear() - duh
		- #### $O(n)$

	- ### add(int index,int ele)
		- #### $O(n)$
		- #### adds ele in index and explands the size
	- ### different ways to acces array elements
		- #### for, for each, iterator
		```java
		Iterator<Integer> it = arrL.iterator();
		```