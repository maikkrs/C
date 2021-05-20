# PIA

## Program

It is a program oriented towards people who are dedicated to giving some type of private counseling or tutoring. The idea is that teachers can register their students and assign them on a specific day and time, and that they can also assign what subjects or topics they give each one and the cost of the class. It is hoped that they can also see how much (in theory) they will earn that day and the days they have free to add more students.

I chose to do this because my parents teach children in the week and there are times when they confuse each child's schedule, as well as what they charge each child.

## Youtube link
   https://youtu.be/Z2HOLJE8GzU
   
## What does the program do?

   * register a student.
      ```
      * Name
      * Middle name (If exists)
      * Last name
      * Second last name
      * Day of the week
      * How much they charge
      * Hour
      * School subject/Topic
      ```
      The program writes the information in a different text document that corresponds to the day of the week that was chosen, therefore, there are 7 text files where the    information of the students for that day is stored.
   * show list of students with their information.
     
      *Text format*
       ```
      Name MiddleName LastName SecondLastname         Time        Price       Subject
      ```
      *Example*
       ```
       Mauricio Ruiz Castillo          7 p.m.		$100		Maths
       Roberto Jimenez Ramirez         6 p.m.		$100		Arts
       Miguel Ramirez Sanchez          5 p.m.		$200		Arts
       Alfredo Torres Dominguez        5 p.m.		$230		English
       Antonio Alberto Suarez Ruiz     6 p.m.		$230		Mathematics
       Jose Alfredo Rodriguez Castillo 5 p.m.		$150		Arts
      ```
      
      To do both actions the program first ask for the day of the week, so it could write in the specific file. The user read something like this:
       ```
       1 -  Monday          
       2 -  Tuesday    
       3 -  Wednesday   
       4 -  Thursday    
       5 -  Friday    
       6 -  Saturday    
       7 -  Sunday    
      ```
      So they write the number and the program recognizes what day it is. Something similar happens when they choose the hour.
      
      
      
      I took into account an 8-hour workday. As I already mentioned, it is based on the classes given by my parents, and there are times when there are group classes in the same hour, so it is also possible to register several people register in the same hour.
      ## References
      
      Kernighan, B. W., & Ritchie, D. M. (2006). The C programming language.
      
      C Files I/O: Opening, Reading, Writing and Closing a file. (s. f.). Programiz. https://www.programiz.com/c-programming/c-file-input-output


