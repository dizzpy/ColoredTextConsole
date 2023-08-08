
  <h1 align="center">Colored Text Console</h1>

  <p align="center">This repository contains a simple C/C++ program that demonstrates how to print colored text output in the console using ANSI escape codes. The color codes are organized in a separate header file.</p>

<p align="center">
    <a href="#introduction">Introduction</a> •
    <a href="#usage">Usage</a> •
    <a href="#color-codes">Color Codes</a> •
    <a href="#compatibility">Compatibility</a> •
    <a href="#license">License</a>
</p>

<p align="center">
  <img src="preview image.png" alt="Preview Image" height="450px">
</p>

  <h2 id="introduction">Introduction</h2>

  <p>Have you ever wondered how to add colors to your console output? This repository provides a basic example of using ANSI escape codes to print text in various colors. The program is written in C/C++ and showcases both regular and bright versions of different colors. The color codes are organized in a separate header file (<code>colored_text.h</code>).</p>

  <h2 id="usage">Usage</h2>

  <ol>
    <li>Clone this repository to your local machine:</li>
  </ol>
  <pre><code>git clone https://github.com/dizzpy/ColoredTextConsole.git
</code></pre>

<pre><code>cd ColoredTextConsole</code></pre>
  <ol start="2">
    <li>Compile and run the program:</li>
  </ol>
  <pre><code>// For C
gcc main.c -o colored_text
./colored_text
</code></pre>

<pre><code>
// For C++
g++ main.cpp -o colored_text
./colored_text</code></pre>
  <ol start="3">
    <li>Observe the colorful text output in your terminal.</li>
  </ol>

  <h2 id="color-codes">Color Codes</h2>

  <p>The color codes used in the program are organized in a separate header file <code>colored_text.h</code>. This header file contains macros for both regular and bright versions of different colors.</p>

  <h3>Regular Colors</h3>
  <ul>
    <li>Black: <code>\e[0;30m</code></li>
    <li>Red: <code>\e[0;31m</code></li>
    <li>Green: <code>\e[0;32m</code></li>
    <li>Yellow: <code>\e[0;33m</code></li>
    <li>Blue: <code>\e[0;34m</code></li>
    <li>Magenta: <code>\e[0;35m</code></li>
    <li>Cyan: <code>\e[0;36m</code></li>
    <li>White: <code>\e[0;37m</code></li>
  </ul>

  <h3>Bright Colors</h3>
  <ul>
    <li>Bright Black: <code>\e[1;30m</code></li>
    <li>Bright Red: <code>\e[1;31m</code></li>
    <li>Bright Green: <code>\e[1;32m</code></li>
    <li>Bright Yellow: <code>\e[1;33m</code></li>
    <li>Bright Blue: <code>\e[1;34m</code></li>
    <li>Bright Magenta: <code>\e[1;35m</code></li>
    <li>Bright Cyan: <code>\e[1;36m</code></li>
    <li>Bright White: <code>\e[1;37m</code></li>
  </ul>

  <h2 id="compatibility">Compatibility</h2>

  <p>These ANSI escape codes may not work in all terminal emulators. Make sure to test the program in the terminal you are using.</p>

  <h2 id="license">License</h2>

  <p>This project is licensed under the <a href="LICENSE">MIT License</a>.</p>

  <p>Feel free to contribute, improve, and share!</p>
