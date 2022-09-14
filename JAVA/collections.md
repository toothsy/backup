# collection class
- ## its a utility class to help ye be fast.
- ## collection is what has all set, list and stuff
- ### throws NullPointerException if object passed to methds is `NULL`
- ## objectExtendor is something that is not primitive.

- ##### Collections.addAll(ObjectExtendor,i0,i1,i2,i3)
	- ##### adds the elements to the collectionChild
- ##### Collections.sort(ObjectExtendor,comparator)
	- ##### sorts according to the optional comparator
- ##### Collections.reverse(ObjectExtendor)
	- ##### reverses the child, inplace
- ##### Collections.binarySearch(collectionChild,key)
	- ##### finds the key, if not exists then it returns the possible `place it could have been`
- ##### Collections.copy(ObjectExtendor,collectionChildSrc)
	- ##### copies the contents of src to dest `only if dest size is greater or same`.
- ##### Collections.rotate(ObjectExtendor,distance);
	- ##### rotates the obj by `distance`
	```java
	Integer[] arr = new Integer[]{1,2,23,4,5,6,85};
	Collections.rotate(Arrays.asList(arr),5);//right rotation
	//[23, 4, 5, 6, 85, 1, 2]
	Collections.rotate(Arrays.asList(arr),arr.length-5);
	//left rotation
	//[23, 4, 5, 6, 85, 1, 2]

	```

![imageAlt](./pictures/colp5.png)