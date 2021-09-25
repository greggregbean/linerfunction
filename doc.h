//! @file doc.h

#define MAXLEN 1000

//! @brief The function gets the strings from a file
//! @note The function puts the strings from the file to the given list
//!       and puts the pointer of the string in the index list
//! @param[in] str - the list in which we should put lines from the file
//! @param[in] index - the list in which we should put the pointers of the lines
//! @param[in] fp - the pointer of the file
//! @return Nothing
void liner(char* str, char** index, FILE *fp);
