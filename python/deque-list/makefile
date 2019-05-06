
.PHONY: README.md
README.md:
	echo '### deque or list' > $@

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

timeit = python3 -m timeit -n 100

deque_list:
	$(timeit) -s "import deque_list" "deque_list.func1(10 ** 3)"
	$(timeit) -s "import deque_list" "deque_list.func2(10 ** 3)"

