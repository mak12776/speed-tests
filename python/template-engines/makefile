
.PHONY: pull-all
pull-all:
	-(cd mako/ && git pull)
	-(cd jinja/ && git pull)
	-(cd pycro/ && git pull)
	-(cd preprocess/ && git pull)
	-(cd genshi/ && git pull)

README.md: create_readme.py
	./create_readme.py README.md

commit:
	git commit -am "next commit" && git push

