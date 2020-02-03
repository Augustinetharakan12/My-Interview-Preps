class mps:
	def __init__(self, k):
		self.product = 1
		self.elements = []
		self.max_len = k
		self.zero_flag = False

	def add(self, el):
		# self.product = self.product * el
		self.elements.append(el)
		if(el == 0):
			pass
		else:
			self.product *= el

		if(len(self.elements) > self.max_len):
			removed_element = self.elements.pop(0)
			if(removed_element != 0): self.product /= removed_element

	def get_product(self):
		if(0 in self.elements):
			return 0
		return self.product

