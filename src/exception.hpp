#ifndef EXCEPTION_H
#define EXCEPTION_H

/*******************************
 * DO NOT EDIT THIS FILE
 *******************************/

/*
 * All exceptions are derived from the 'exception' class
 *  - consequently, catch( excpetion ) { ... } will catch only these exceptions
 *
 *       exception <----- underflow
 *                    |-- underflow
 *                    |-- overflow
 *                    |-- division_by_zero
 *                    |-- illegal_argument
 *                     -- out_of_range
 */

class exception {
  // empty class
};

class underflow : public exception {
  // empty class
};

class overflow : public exception {
  // empty class
};

class division_by_zero : public exception {
  // emtpy class
};

class illegal_argument : public exception {
  // emtpy class
};

class out_of_range : public exception {
  // emtpy class
};

#endif
