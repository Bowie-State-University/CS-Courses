print("test");
from hyphen import hyphenator
from hyphen.dictools import *
# Download and install some dictionaries in the default directory using the default
# repository, usually the OpenOffice website
for lang in ['de_DE', 'fr_FR', 'en_UK', 'hu_HU']:
    if not is_installed(lang): install(lang)
# Create some hyphenators
h_de = hyphenator('de_DE')
h_en = hyphenator(lmin = 3, rmin = 3) # the en_US dictionary is used by default!
h_hu = hyphenator('hu_HU')
# Now hyphenate some words. Note that under Python 3.0, words are of type string.
# print h_en.pairs(u'beautiful')
# print h_en.wrap(u'beautiful', 6)
# print h_en.wrap(u'beautiful', 7)

