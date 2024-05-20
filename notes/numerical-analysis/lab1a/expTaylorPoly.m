% =========================================================================
% AUTHOR ..... David
% UPDATED .... 2024.01.18
%
% Evaluate the truncated Taylor series for exp(x) about the point x0 = 0
%
% INPUT
%   x .... Vector of values to evaluate the Taylor polynomial at
%   n .... Integer of last term to evaluate in Taylor polynomial
%
% OUTPUT
% T : Evaluated Taylor polynomial at points given by x degree n
% =========================================================================

function T = expTaylorPoly(x, n)
    % Initialize sum as 0
    T = 0;
    % Loop over terms in series
    for k = 0:n
        T = T + x.^k ./ factorial(k);
    end
end


\documentclass{article}
\usepackage{listings}
\usepackage{xcolor}

% ... (same preamble as before)

\begin{document}

\section{MATLAB Code Example}

\lstinputlisting[caption=Your MATLAB code caption here,label=your-label-here]{yourfile.m}

\end{document}
