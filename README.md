# Layout Editor

The goal of `sj-layout-editor` project is to provide user friendly layout editor. At first, we want to support [hJOP](https://hjop.kmz-brno.cz/) system which allowes dispatchers to control a model railway via interface based on ZTP-JOP. This is also first part of `simjop` project--railway traffic control game.

If you want to be in touch with the community, please connect to [discord](https://discord.gg/drcmjBf).


## Development

### Fedora 31

    sudo dnf install qt5 qt5-devel
    sudo dnf install qt-creator qt5-designer qt5-linguist
    sudo dnf install mingw64-qt5-qmake mingw32-qt5-qmake qconf
    sudo dnf install clang clang-tools-extra git-clang-format clang-analyzer

### Set up local git repository

    # git configuration
    git config user.name "your_name"
    git config user.email "your_email"
    # (optionally)
    git config user.signingkey your_gpg_key

    # set up commit template
    git config commit.template .git-commit-template

    # set up git-clang-format
    git config clangFormat.style file

On GNU/Linux operating system you can also use script in `contrib` directory. It provides command `chmake` which helps you to compile on all processors you have on your machine.

### How to compile

#### On Fedora 31

    # Generate Makefile
    qmake-qt5

    # make using all processors
    chmake

    # run compiled sj-layout-editor
    ./build/sj-layout-editor


### How to contribute

Everybody is welcome in community around this project. We want to have open discussions, for that--it is always better to write new `issue`. So then it is clear what is the your intention in RFE or what is the essence of bug which you found.

If you want to contribute, please create new branch in your forked repository (or in this repository if you have rights), example of branch name is `i001_set_up_the_project_v1`. And also write which issue are you closing with your (last) commit in your PR.

Typically, before you type `git commit` run also `git clang-format` command, so the code format style will be preserved.


## Resources

- [Regular Expression](https://regexr.com/)
- [C/C++ Reference](http://en.cppreference.com)
- [Qt5 Reference](https://doc.qt.io/qt-5/reference-overview.html)
