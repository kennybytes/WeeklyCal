
/*  File: container.c
 *  Date: 12 Sep 06
 *  Rev:  25 Sep 07
 *
 *  Container class definitions - version 2
 */

#include <stdlib.h>
#include "common.h"
#include "entry.h"
#include "container.h"
#include "appointment.h"



/*******************************************************************/
/*                                                                 */
/*  More Complex Container Operations                              */
/*                                                                 */
/*******************************************************************/

void Container::insert(Entry x, Position p)
/*  insert entry x into Container at position p (-1 is end of container)
    pre:  Container has been created, x is a valid entry, and 0 <= p <= n,
	where n is number of Container entries
    post: x is inserted in the Container at position p, all entries at p and after
	have increased in position by 1.
    error: if Container is full, nothing done and waring produced.
 */
{

	if(p==-1)
		elements[count]=x;
	else{	
		verify(p,0,count,"insert");
		for(int i=count-1;i>=p;i--)
		{
			elements[i+1]=elements[i];
		}
		replace(x,p);
	}
	count++;

}

Entry Container::remove(Position p)
/*  delete and return entry at position p
    pre:  Container has been created, and 0 <= p < n, where n is number
	of Container entries
    post: entry at position p has been deleted and returned as x, all entries
	after p have decreased in position by 1
    error: if Container is shorter than p, nothing done an waring produced.
*/
{
	verify(p,0,count-1,"remove");
	Entry temp = get(p);
	for(int i=p;i<count;i++)
		elements[i]=elements[i+1];
	count--;
	return temp;
}

bool Container::operator==(const Container &other) const
{
	if(this->count!=other.count) return false;

	for(int i=0;i<count;i++)
		if (elements[i] != other.elements[i]) return false;

	return true;
}
bool Container::operator!=(const Container &other) const
{
	return !(*this==other);
}

void displaycontainer(Entry &x)
{  
	x.Display(); 
}
