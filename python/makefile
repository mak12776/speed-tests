
.PHONY: README.md
README.md:

	echo '# python timeit functions' > $@
	echo >> $@

	echo '### deque or list' >> $@

	echo '`deque_list.py`:' >> $@
	echo '```python' >> $@
	cat deque_list.py >> $@
	echo '```' >> $@

	echo '__result__:' >> $@
	echo '```' >> $@
	$(MAKE) deque_list >> $@
	echo '```' >> $@

commit-readme:
	git add README.md
	git commit -m "update README.md"

deque_list:
	python3 -m timeit -n 1000 -s "import deque_list" "deque_list.func1()"
	python3 -m timeit -n 1000 -s "import deque_list" "deque_list.func2()"

