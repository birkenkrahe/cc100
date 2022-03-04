
/*   - The variable ~height~ is not declared */
/*   - The ~printf~ function is not recognized */
/*   - The string literal is not complete */

/* * Good practice: */
/*   - Space between tokens makes identification easier */
/*   - Indentation makes nesting easier to spot */
/*   - Blank lines can divide a program into logical units */

/* * [ ] Practice: improve the layout of this program ([[https://drive.google.com/file/d/1FSc4gQVBf6f62qiAsJ81rGdHHkf5Tff2/view?usp=sharing][get it from */
/*   GDrive]]), then run it. */

/*   #+name: layout */

/* [[file:../README.org::layout][layout]] */
int main() {
int var1=1;int var2;var2=
		      var1
		      *100;
printf (      "Variable1=%d,variable2=%d\n",
	      var1,

	      var2
	      );
return 0;
}
/* layout ends here */
