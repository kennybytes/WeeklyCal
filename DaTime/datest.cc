
/*
 *  File:  driver2.c
 *  Name:
 *  login: 
 *  Date:  25 Aug 07
 *  Mod:
 */

/*  Test driver for Time data type
 */


#include <stdio.h>
#include "time.h"
#include "datime.h"

main()
{
   int minutes, diff, hr, min;
   // I deleted "Time a, b" because I didn't see you use them
   // and it would save me a lot of time if I can keep my variable
   // names (I'll tell you why in class)
   // 
   Time t1, t2, t3, t4, t5, t6, t7, sum;
   Time t8;

	printf("Times:\n");
	t1.Init(9, 10);
	t2.Init(11, 20);
	t3.InitSingle(1100);
	t4.InitSingle(415);
	t5.InitSingle(1030);
	t6.InitSingle(520);
	t7.InitSingle(910);
	t8.Init(9, 20);

	/*  Display times  */
	printf("t1= ");	
	t1.Display();
	printf("\n");
	printf("t2= ");
	t2.Display();
	printf("\n");
	printf("t3= ");
	t3.Display();
	printf("\n");
	printf("t4= ");
	t4.Display();
	printf("\n");
	printf("t5= ");
	t5.Display();
	printf("\n");
	printf("t6= ");
	t6.Display();
	printf("\n");
	printf("t7= ");
	t7.Display();
	printf("\n");
	printf("t8= ");
	t8.Display();
	printf("\n");
	printf("\n\n");
	
	/*  Comparison function tests  */
	/*  Equal  */
	printf("Equal:\nt1 vs t2: ");
	if(t1.operator==(t2))
		printf("t1 equals t2\n");
	else
		printf("t1 is not equal to t2\n");

	printf("t1 vs t3: ");
	if(t1.operator==(t3))
		printf("t1 equals t3\n");
	else
		printf("t1 is not equal to t3\n");

	printf("t1 vs t4: ");
	if(t1.operator==(t4))
		printf("t1 equals t4\n");
	else
		printf("t1 is not equal to t4\n");
	
	printf("t1 vs t5: ");
	if(t1.operator==(t5))
		printf("t1 equals t5\n");
	else
		printf("t1 is not equal to t5\n");
		
	printf("t1 vs t6: ");
	if(t1.operator==(t6))
		printf("t1 equals t6\n");
	else
		printf("t1 is not equal to t6\n");
	
	printf("t1 vs t7: ");
	if(t1.operator==(t7))
		printf("t1 equals t7\n");
	else
		printf("t1 is not equal to t7\n");

	printf("t1 vs t8: ");
	if(t1.operator==(t8))
		printf("t1 equals t8\n\n");
	else
		printf("t1 is not equal to t8\n\n");
		
	/* Not Equal */
	printf("NotEqual:\nt1 vs t2: ");	
	if(t1.operator!=(t2))
		printf("t1 is not equal to t2\n");
	else
		printf("t1 equals t2\n");

	printf("t1 vs t3: ");
	if(t1.operator!=(t3))
		printf("t1 is not equal to t3\n");
	else
		printf("t1 equals t3\n");

	printf("t1 vs t4: ");
	if(t1.operator!=(t4))
		printf("t1 is not equal to t4\n");
	else
		printf("t1 equals t4\n");

	printf("t1 vs t5: ");
	if(t1.operator!=(t5))
		printf("t1 is not equal to t5\n");
	else
		printf("t1 equals t5\n");

	printf("t1 vs t6: ");
	if(t1.operator!=(t6))
		printf("t1 is not equal to t6\n");
	else
		printf("t1 equals t6\n");

	printf("t1 vs t7: ");
	if(t1.operator!=(t7))
		printf("t1 is not equal to t7\n\n");
	else
		printf("t1 equals t7\n\n");

	/* Less Than  */	
	printf("LessThan:\nt1 vs t2: ");
	if(t1.operator<(t2))
		printf("t1 is less than t2\n");
	else
		printf("t1 is not less than t2\n");
	
	printf("t1 vs t3: ");
	if(t1.operator<(t3))
		printf("t1 is less than t3\n");
	else
		printf("t1 is not less than t3\n");
	
	printf("t1 vs t4: ");
	if(t1.operator<(t4))
		printf("t1 is less than t4\n");
	else
		printf("t1 is not less than t4\n");
	
	printf("t1 vs t5: ");
	if(t1.operator<(t5))
		printf("t1 is less than t5\n");
	else
		printf("t1 is not less than t5\n");
	
	printf("t1 vs t6: ");
	if(t1.operator<(t6))
		printf("t1 is less than t6\n");
	else
		printf("t1 is not less than t6\n");
	
	printf("t1 vs t7: ");
	if(t1.operator<(t7))
		printf("t1 is less than t7\n");
	else
		printf("t1 is not less than t7\n");
		
	printf("t1 vs t8: ");
	if(t1.operator<(t8))
		printf("t1 is less than t8\n\n");
	else
		printf("t1 is not less than t8\n\n");
	

	/*  Greater Than  */
	printf("GreaterThan:\nt1 vs t2: ");
        if (t1.operator>(t2))
        	printf("t1 is greater than t2\n");
	else
		printf("t1 is not greater than t2\n");

	printf("t1 vs t3: ");
        if (t1.operator>(t3))
        	printf("t1 is greater than t3\n");
	else
		printf("t1 is not greater than t3\n");

	printf("t1 vs t4: ");
        if (t1.operator>(t4))
        	printf("t1 is greater than t4\n");
	else
		printf("t1 is not greater than t4\n");

	printf("t1 vs t5: ");
        if (t1.operator>(t5))
        	printf("t1 is greater than t5\n");
	else
		printf("t1 is not greater than t5\n");

	printf("t1 vs t6: ");
        if (t1.operator>(t6))
        	printf("t1 is greater than t6\n");
	else
		printf("t1 is not greater than t6\n");

	printf("t1 vs t7: ");
        if (t1.operator>(t7))
        	printf("t1 is greater than t7\n\n");
	else
		printf("t1 is not greater than t7\n\n");

	/*  Less Than or Equal  */
	printf("LessThanOrEqual:\nt1 vs t2: ");
	if (t1.operator<=(t2))
        	printf("t1 is less than or equal to t2\n");
	else
		printf("t1 is not less than or equal to t2\n");

	printf("t1 vs t3: ");
	if (t1.operator<=(t3))
        	printf("t1 is less than or equal to t3\n");
	else
		printf("t1 is not less than or equal to t3\n");

	printf("t1 vs t4: ");
	if (t1.operator<=(t4))
        	printf("t1 is less than or equal to t4\n");
	else
		printf("t1 is not less than or equal to t4\n");

	printf("t1 vs t5: ");
	if (t1.operator<=(t5))
        	printf("t1 is less than or equal to t5\n");
	else
		printf("t1 is not less than or equal to t5\n");

	printf("t1 vs t6: ");
	if (t1.operator<=(t6))
        	printf("t1 is less than or equal to t6\n");
	else
		printf("t1 is not less than or equal to t6\n");

	printf("t1 vs t7: ");
	if (t1.operator<=(t7))
        	printf("t1 is less than or equal to t7\n\n");
	else
		printf("t1 is not less than or equal to t7\n\n");

	/*  Greater Than or Equal  */
	printf("GreaterThanOrEqual:\nt1 vs t2: ");
        if (t1.operator>=(t2))
        	printf("t1 is greater than or equal to t2\n");
	else
		printf("t1 is not greater than or equal to t2\n");

	printf("t1 vs t3: ");
        if (t1.operator>=(t3))
        	printf("t1 is greater than or equal to t3\n");
	else
		printf("t1 is not greater than or equal to t3\n");

	printf("t1 vs t4: ");
        if (t1.operator>=(t4))
        	printf("t1 is greater than or equal to t4\n");
	else
		printf("t1 is not greater than or equal to t4\n");

	printf("t1 vs t5: ");
        if (t1.operator>=(t5))
        	printf("t1 is greater than or equal to t5\n");
	else
		printf("t1 is not greater than or equal to t5\n");

	printf("t1 vs t6: ");
        if (t1.operator>=(t6))
        	printf("t1 is greater than or equal to t6\n");
	else
		printf("t1 is not greater than or equal to t6\n");

	printf("t1 vs t7: ");
        if (t1.operator>=(t7))
        	printf("t1 is greater than or equal to t7\n\n");
	else
		printf("t1 is not greater than or equal to t7\n\n");

	/* Time Difference function test  */	
	printf("Difference:\nt1 - t2: %d mins\n", 
		t1.Difference(t2));
	printf("t1 - t3: %d mins\n", t1.Difference(t3));
	printf("t1 - t4: %d mins\n", t1.Difference(t4));
	printf("t1 - t5: %d mins\n", t1.Difference(t5));
	printf("t1 - t6: %d mins\n", t1.Difference(t6));
	printf("t1 - t7: %d mins\n\n", t1.Difference(t7));

	/*  Time Add function test  */
	printf("Add:\n");
	minutes = 70;
	printf("minutes added: %d mins\nt1 + minutes: ", minutes);
	sum = t1.Add(minutes);
	sum.Display();
	printf("\n");

	printf("t2 + minutes: ");
	sum = t2.Add(minutes);
	sum.Display();
	printf("\n");

	printf("t3 + minutes: ");
	sum = t3.Add(minutes);
	sum.Display();
	printf("\n");

	printf("t4 + minutes: ");
	sum = t4.Add(minutes);
	sum.Display();
	printf("\n");

	printf("t5 + minutes: ");
	sum = t5.Add(minutes);
	sum.Display();
	printf("\n");

	printf("t6 + minutes: ");
	sum = t6.Add(minutes);
	sum.Display();
	printf("\n");

	printf("t7 + minutes: ");
	sum = t7.Add(minutes);
	sum.Display();
	printf("\n");

	/*  Copy fnction test  */
	printf("\nCopy:\ncopy of t2: t1=");
	t1.Copy(t2);
	t1.Display();
	printf("\n");

	printf("copy of t3: t1=");
	t1.Copy(t3);
	t1.Display();
	printf("\n");

	printf("copy of t4: t1=");
	t1.Copy(t4);
	t1.Display();
	printf("\n");

	printf("copy of t5: t1=");
	t1.Copy(t5);
	t1.Display();
	printf("\n");

	printf("copy of t6: t1=");
	t1.Copy(t6);
	t1.Display();
	printf("\n");

	printf("copy of t7: t1=");
	t1.Copy(t7);
	t1.Display();
	printf("\n");

	/*  Clear function test  */
	printf("\nClear:\nclear t1: t1=");
	t1.Clear();
	t1.Display();
	printf("\n");

	printf("clear t2: t2=");
	t2.Clear();
	t2.Display();
	printf("\n");

	printf("clear t3: t3=");
	t3.Clear();
	t3.Display();
	printf("\n");

	printf("clear t4: t4=");
	t4.Clear();
	t4.Display();
	printf("\n");

	printf("clear t5: t5=");
	t5.Clear();
	t5.Display();
	printf("\n");

	printf("clear t6: t6=");
	t6.Clear();
	t6.Display();
	printf("\n");

	printf("clear t7: t7=");
	t7.Clear();
	t7.Display();
	printf("\n");

	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	
	/* ************ */
	/* ************ */
	/* DATIME TESTS */
	/* ************ */
	/* ************ */

	Time t01, t02, t03, t04, t05, t06, t07;
	DaTime a, b, c, d, e, f, g, h, i, j, k;

	t01.Init(11, 30);
	t02.Init(12, 20);
	t03.InitSingle(300);
	t04.InitSingle(415);
	t05.InitSingle(1030);
	t06.Init(12, 00);
	t07.Init(1, 00);

	a.Init('m', t01, t02);
	b.Init('t', t03, t04);
	c.Init('m', t05, t01);
	d.Init('m', t05, t01);
	e.Init('m', t06, t03);
	f.Init('t', t06, t03);
	k.Init('m', t07, t03);
	
	printf("datimes:\n");
	a.Display();
	b.Display();
	c.Display();
	d.Display();
	e.Display();
	f.Display();
	k.Display();
	printf("\n");
	printf("\n");
	
	/* Comparison tests */
	
	/* Equal */
	printf("Equal?\n     ");
	a.Display();
	printf("     ");
	b.Display();
	if (a.operator==(b))
	{
		printf("Yes, equal.");
	}
	else
		printf("No, not equal.");
	printf("\n\n");
	
	printf("Equal?\n     ");
	c.Display();
	printf("     ");
	d.Display();
	if (c.operator==(d))
	{
		printf("Yes, equal.");
	}
	else
		printf("No, not equal.");
	printf("\n\n");

	/* Not Equal */

	printf("Not Equal?\n     ");
	a.Display();
	printf("     ");
	b.Display();
	if (a.operator!=(b))
	{
		printf("Yes, not equal.");
	}
	else
		printf("No, equal.");
	printf("\n\n");
	
	printf("Not Equal?\n     ");
	c.Display();
	printf("     ");
	d.Display();
	if (c.operator!=(d))
	{
		printf("Yes, not equal.");
	}
	else
		printf("No, equal.");
	printf("\n\n");
	
	/* Less Than */

 	printf("Less Than?\n     ");
	a.Display();
	printf("     ");
	b.Display();
	if (a.operator<(b))
	{
		printf("Yes, less than.");
	}
	else
		printf("No, not less than.");
	printf("\n\n");
	
 	printf("Less Than?\n     ");
	b.Display();
	printf("     ");
	a.Display();
	if (b.operator<(a))
	{
		printf("Yes, less than.");
	}
	else
		printf("No, not less than.");
	printf("\n\n");

 	printf("Less Than?\n     ");
	c.Display();
	printf("     ");
	d.Display();
	if (c.operator<(d))
	{
		printf("Yes, less than.");
	}
	else
		printf("No, not less than.");
	printf("\n\n");

	/* Greater Than */

	printf("Greater Than?\n     ");
	a.Display();
	printf("     ");
	b.Display();
	if (a.operator>(b))
	{
		printf("Yes, greater than.");
	}
	else
		printf("No, not greater than.");
	printf("\n\n");
	
 	printf("Greater Than?\n     ");
	b.Display();
	printf("     ");
	a.Display();
	if (b.operator>(b))
	{
		printf("Yes, greater than.");
	}
	else
		printf("No, not greater than.");
	printf("\n\n");

 	printf("Greater Than?\n     ");
	c.Display();
	printf("     ");
	d.Display();
	if (c.operator>(d))
	{
		printf("Yes, greater than.");
	}
	else
		printf("No, not greater than.");
	printf("\n\n");

	/* LessThanOrEqual */

 	printf("Less Than Or Equal?\n     ");
	b.Display();
	printf("     ");
	a.Display();
	if (b.operator<=(a))
	{
		printf("Yes, less than or equal.");
	}
	else
		printf("No, not less than or equal.");
	printf("\n\n");

 	printf("Less Than Or Equal?\n     ");
	c.Display();
	printf("     ");
	d.Display();
	if (c.operator<=(d))
	{
		printf("Yes, less than or equal.");
	}
	else
		printf("No, not less than or equal.");
	printf("\n\n");

	/* GreaterThanOrEqual */

 	printf("Greater Than Or Equal?\n     ");
	b.Display();
	printf("     ");
	a.Display();
	if (b.operator>=(a))
	{
		printf("Yes, greater than or equal.");
	}
	else
		printf("No, not greater than or equal.");
	printf("\n\n");

 	printf("Greater Than Or Equal?\n     ");
	c.Display();
	printf("     ");
	d.Display();
	if (c.operator>=(d))
	{
		printf("Yes, greater than or equal.");
	}
	else
		printf("No, not greater than or equal.");
	printf("\n\n");

	/* Overlap */

 	printf("Overlap?\n     ");
	a.Display();
	printf("     ");
	e.Display();
	if (a.Overlap(e))
	{
		printf("Yes, overlap.");
	}
	else
		printf("No, no overlap.");
	printf("\n\n");

 	printf("Overlap?\n     ");
	a.Display();
	printf("     ");
	c.Display();
	if (a.Overlap(c))
	{
		printf("Yes, overlap.");
	}
	else
		printf("No, no overlap.");
	printf("\n\n");

 	printf("Overlap?\n     ");
	a.Display();
	printf("     ");
	f.Display();
	if (a.Overlap(f))
	{
		printf("Yes, overlap.");
	}
	else
		printf("No, no overlap.");
	printf("\n\n");

	printf("Overlap?\n     ");
	c.Display();
	printf("     ");
	e.Display();
	if (c.Overlap(e))
	{
		printf("Yes, overlap.");
	}
	else
		printf("No, no overlap.");
	printf("\n\n");

	/* NonOverlap */

 	printf("NonOverlap?\n     ");
	a.Display();
	printf("     ");
	e.Display();
	if (a.NonOverlap(e))
	{
		printf("Yes, nonoverlap.");
	}
	else
		printf("No, overlap.");
	printf("\n\n");

 	printf("NonOverlap?\n     ");
	a.Display();
	printf("     ");
	c.Display();
	if (a.NonOverlap(c))
	{
		printf("Yes, nonoverlap.");
	}
	else
		printf("No, overlap.");
	printf("\n\n");

 	printf("NonOverlap?\n     ");
	a.Display();
	printf("     ");
	f.Display();
	if (a.NonOverlap(f))
	{
		printf("Yes, nonoverlap.");
	}
	else
		printf("No, overlap.");
	printf("\n\n");

	/* Manipulation tests */

	/* Merge */

	printf("Merge:\n     ");
	c.Display();
	printf("     ");
	a.Display();	
	g = c.Merge(a);	
	g.Display();
	printf("\n");

	printf("Merge:\n     ");
	a.Display();
	printf("     ");
	c.Display();	
	h = a.Merge(c);	
	h.Display();
	printf("\n");

	printf("Merge:\n     ");
	a.Display();
	printf("     ");
	b.Display();	
	i = a.Merge(b);	
	i.Display();
	printf("\n");

	printf("Merge:\n     ");
	c.Display();
	printf("     ");
	e.Display();	
	j = c.Merge(e);	
	j.Display();
	printf("\n");

	/* Difference */

 	printf("Difference?\n     ");
	c.Display();
	printf("     ");
	e.Display();
	printf("Difference: %d",c.Difference(e));
	printf("\n\n");

 	printf("Difference?\n     ");
	e.Display();
	printf("     ");
	c.Display();
	printf("Difference: %d",e.Difference(c));
	printf("\n\n");

 	printf("Difference?\n     ");
	c.Display();
	printf("     ");
	a.Display();
	printf("Difference: %d",c.Difference(a));
	printf("\n\n");

 	printf("Difference?\n     ");
	a.Display();
	printf("     ");
	b.Display();
	printf("Difference: %d",a.Difference(b));
	printf("\n\n");

	printf("Difference?\n     ");
	c.Display();
	printf("     ");
	k.Display();
	printf("Difference: %d",c.Difference(k));
	printf("\n\n");


	

}
