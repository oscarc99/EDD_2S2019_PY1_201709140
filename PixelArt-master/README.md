With widely *crisp*, and *high resolution* images flooding the internet nowadays Pixel Art has become somewhat of a Lost art. Since **Pixel Art** is not a difficult task, it is better accomplished by rendering the images on the spot thru the use of **HTML** and **CSS**.

#### Setting up the Grid

First we need to set up a grid, we will be doing this thru our HTML file, which will be later painted thru the CSS file. There are many ways to set up a Grid, including using tables or other HTML elements, but in this example we will be using a series of div containers to paint our grid. We will use a main div container to act as the container for our canvas, and then a second div container repeated the number of times or “pixels” we need.

``` html
<div class="canvas">
  <div class="pixel"></div>
  <!-- Repeat div pixel as many times as needed -->
</div>
```

### SCSS

In this example we will be using **SCSS** or **Sassy CSS**, which uses **Sass** which is a *CSS pre-processor* with syntax advancements. Style sheets using SCSS are first processed by the program and later turned into regular CSS style. Every valid CSS stylesheet is a valid SCSS file with the same meaning. Files using the scss syntax have the **.scss** extension.

#### Setting up the page

We need to setup our page with a couple of attributes that will define the position of our pixel art in our page.

``` css
body {
  background: #333333;      /* Background color of the whole page */
  height: 100vh;            /* 100 viewport heigh units */
  display: flex;            /* defines a flex container */
  justify-content: center;  /* centers the canvas horizontally */
  align-items: center;      /* centers the canvas vertically */
}
```

####  Setting up the canvas

To set up our canvas we need to set the height and width of our canvas div and our pixel div, The trick here is knowing exactly how many pixels to create and divide our canvas into equal parts (pixels). For this we need to multiply the number of pixels by their height and width to obtain our canvas width and height. For example if we want an image of 16x16 pixels, and each pixel with a size of 30px by 30px, (16*30px by 16*30px) our canvas size will be 480px by 480px.

``` css
.canvas {
  width: 480px;   /* Width of the canvas */
  height: 480px;  /* Height of the canvas */
}

.pixel {
  width: 30px;    /* Width of each pixel */
  height: 30px;   /* Height of each pixel */
  float: left;    /* Everytime it fills the canvas div it will begin a new line */
  /*box-shadow: 0px 0px 1px #fff;*/  /* Leave commented, showing the pixel boxes */
}
```

#### Start painting

Now we need to paint each individual pixel, since we are using a list of divs named pixel, we will paint the nth-child pixel, depending on our image, If we have a matrix image, we will need to translate the matrix to a lineal structure in order to accurately paint our canvas.

``` css
/* Paint pixel 1 and 2 white. */
.pixel:nth-child(0),
.pixel:nth-child(1){
  background: #FFFFFF;
}
```

After we have successfully painted all the pixels we want we will be able to see our completed image thru our favorite browser.
