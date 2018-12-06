# tempnam

Realizing how many SO questions are out there re: generating filenames for temp use, I figured it was worth it to just put together a quick-and-dirty implementation. This repo contains both the cross-platform C source and a precompiled statically-linked Windows binary for a **tempnam** executable.

If you ever need to safely generate a temp filename in a batch/shell script, this is your tool.


## Usage

```
NAME
       tempnam

SYNOPSIS
       tempnam [PREFIX]

DESCRIPTION
       Creates a 0-byte file (to reduce the risk of a race condition) in a
       system-defined temp location, then outputs its filename.  If PREFIX
       is given, the file's basename will be prefixed with the given string.

       Exit status:
           0 = OK
           1 = there was a problem generating the filename
           2 = there was a problem generating the 0-byte file
```


## Windows Binary

The provided Windows binary was compiled using [MinGW](http://www.mingw.org/)'s GCC v6.3.0 and neither contains nor inherits any licensing terms or restrictions.


## Contribution / Development

Bug reports and pull requests are welcome on GitHub at https://github.com/nestor-custodio/tempnam.


## License

This source and the corresponding Windows binary are made available as open source under the terms of the [Creative Commons Zero (aka CC0) License](https://www.gnu.org/licenses/license-list.html#CC0).
