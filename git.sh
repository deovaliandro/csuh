#! /bin/bash
read name
read mycommit
git add $name && git commit -m "$mycommit" && git push origin py