# Behavioral dp
- ### they represent the ways in which you can efficiently communicate between objects.

1. ### Interpreter
1. ### Chain of responsibilities
1. ### Iterator
1. ### Mediator
1. ### Command
1. ### Mememnto
1. ### Observer
1. ### State
1. ### Strategy
1. ### Template
1. ### Visitor
# Chain pattern 
- ### Chain of responsibility is more an object trying to handle something & if not, pass it onto the next one in the 'chain'.
- ### for information that requires you to spawn different types of processors that is decided on runtime, this pattern is useful.
- ### here the caller doesnt care how the result is obtained, but result is needed.
- ### if there is only one way to obtain the result then you probably dont need this pattern.
- ### here you append processors into a list till the result is obtained.
- [demo](https://www.youtube.com/watch?v=Dh5PZIjDf2g) of chain pattern, he uses a logger example with different debug levels.

# Command Pattern

- here you expose an object that has an `execute` method and use that to expect results.
- the implementation is de-coupled from the calling class.


# interpretor
- yeh basically dispatched action based on the language that one follows,
- google translator, search fuynctionality are some example.
- they interpret your commands and dispatch actions accordingly
- here `interpret` operation is exposed.

# Iterator
- exactly like the iterator that you came across in collection .
- they manage going forward and backward.
- `hasNext(),next(), reset()`

# Mediator
- eases the mediation between 2 objects for communication
- handles 2 way traffic.
- client object only talks to mediator object

# Mememnto
- best for maintaining state snapshots of plenty of objects

# Observer
- here we have pub-sub method.if anything is published all the subscribers are notified of the publish
- under the hood in UI, whenever a button is clicked whatever code is subscribed to that button is executed.

# state
- here for example like in certain form filling your screens that you see depend on the input that you provide, this requires you to maintain a state of some sort and take actions based on that.

# Strategy
- this one is like choosing different strategy based on the input the user provides.
- for example say user uploads an image, you would need different kind of encryption algo, based on the image.

# Template
- here it describes that methods involved while letting the actual implementation be taken up by subclasses.
- example is storage based logging,like text,pdf or whatever readable.
- their steps are same, but implementation is different.


# Visitor
- here basically what you have is an `accept` method that takes in different parameters based on which you manipulate things diffrently.
- [cool example](https://www.youtube.com/watch?v=pL4mOUDi54o)
