
/*  File: common.h
 *  Date: 6 Sep 05
 *  Rev:
 *
 *  common utility definitions and prototpyes
 */

#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>
#include <stdlib.h>
#include <string>

typedef enum boolean {FALSE, TRUE} Boolean;

void Error(char *);

void Warning(char *);

void TestHead(std::string output);
void Test(std::string output);

#endif
