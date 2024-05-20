---
layout: default
permalink: /problems/
---

A collection of non-intuitive problems with beautiful intuitive solutions :)

{% for page in site.pages %}
{% if page.folder == 'problems' %}
- [{{ page.title }}]({{ page.url }})
{% endif %}
{% endfor %}