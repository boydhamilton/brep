

# poetry & c++

## intro and motivations
`claude`. Six letters that flow from my fingers as easily and naturally as water every time I open wsl. What I type before I embark on an elaborate project, one so large in scale I would've considered it infeasible a few years ago when I had to type each line by hand (or at least copy it from Stack Overflow), now takes a matter of hours. What a testament to the massive acceleration and increase of capabilities in software engineering! A marvel of human ingenuity that despite all we've already invented, these Industrial Revolutions continue to push humanity down the path of technological advancement.

It's in these moments I reflect on why, at 15, I chose to pursue computer engineering at UBC. I had no pressure from my parents to persue engineering, nor to get into software. I remember the true, authentic excitement that came from writing the small (or large) programs I'd work on in high school. I could hardly make myself forget

- The moment I used sliders in the photo editing app I was writing in Lua LOVE to successfully tint a photo hot pink

- The moment a pixel in the bitsmashed C rendering API I was building went bright at the right coordinates

- The moment the character in my Unity game teleported to their magic gems location as programmed

Each of these, and so many more, were exciting because of the work that went into them. Hours of research, reading, and bugfixing to produce a singular point of success. The first of many, the one that motivated me to continue with the project. And it's the magic of these moments that I wanted to pursue professionally, so I could continue chasing them like an addict.

The power of these moments wasn't entirely from the brilliance of engineering behind these programs. It was in part, with the dexterity my fingers would allow, I had found a form of self expression in code. That each line written, while utility, also served as an artistic choice. While bringing into existence something I created for a moment I was Da Vinci, Leonardo, Picasso, or a million others who describe themselves as visionaries with a lifebound purpose to create art. Each program is, in the same way as an inductive proof of inequality or sonnet about an estranged lover, a communication of an idea from one to another. And so in our space, that artistic space, exists the software engineer.

Now, the marriage between the creator and their creation is met with a middle man, the AI who is the one experiencing these powerful, magical moments of development. While I will by no means stop using AI code agents either in my work (or other personal projects! They do help get a job done!) I want to embark on a small journey without it, to recapture the magic that enraptured me with software engineering to begin with.

And to do that, we will jump into the boundlessly exciting world of an everyday command line utility: `grep`

# design

Initally, I wanted to just get a working `grep`, so I absolved to delegate as much as possible to the standard library. However, in the interest of making it modular for later optimization and improvement, I maintained modularity by dividing work into a filesystem and regex handler. 

```bash
boydrhamilton@BRHPC:~/cpp/brh-grep$ ./brep /home/boydrhamilton/cpp '.*\.cpp'
"/home/boydrhamilton/cpp/go/main.cpp"
"/home/boydrhamilton/cpp/go/src/player.cpp"
"/home/boydrhamilton/cpp/go/src/game.cpp"
"/home/boydrhamilton/cpp/go/src/draw.cpp"
"/home/boydrhamilton/cpp/opencvtest.cpp"
"/home/boydrhamilton/cpp/producer-consumer/main.cpp"
```

# profiling
hyperfine

linux: perf, strace

**perf notes**

`perf stat ./brep /home/boydrhamilton/ '.*\.cpp' > /dev/null`
https://www.brendangregg.com/perf.html