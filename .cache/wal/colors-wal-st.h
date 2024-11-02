const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0f1d2a", /* black   */
  [1] = "#D56278", /* red     */
  [2] = "#C0947A", /* green   */
  [3] = "#E0748A", /* yellow  */
  [4] = "#E79D9D", /* blue    */
  [5] = "#F0ADBC", /* magenta */
  [6] = "#ECCDA6", /* cyan    */
  [7] = "#f4ebdc", /* white   */

  /* 8 bright colors */
  [8]  = "#aaa49a",  /* black   */
  [9]  = "#D56278",  /* red     */
  [10] = "#C0947A", /* green   */
  [11] = "#E0748A", /* yellow  */
  [12] = "#E79D9D", /* blue    */
  [13] = "#F0ADBC", /* magenta */
  [14] = "#ECCDA6", /* cyan    */
  [15] = "#f4ebdc", /* white   */

  /* special colors */
  [256] = "#0f1d2a", /* background */
  [257] = "#f4ebdc", /* foreground */
  [258] = "#f4ebdc",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
